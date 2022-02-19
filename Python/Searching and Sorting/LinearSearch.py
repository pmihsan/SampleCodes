pos = -1

def search(list, n):

    for i in range(len(list)):
        if list[i] == n:
            global pos
            pos = i
            return True
        
    return False

    # i = 0
    # while i < len(list):
    #     if list[i] == n:
    #         global pos
    #         pos = i
    #         # or we can also use
    #         # globals()['pos'] = i
    #         return True
    #     i = i + 1
    # return False



list = [3, 2, 1, 7, 4, 9]
n = 1

if search(list, n):
    print("Found at",pos)
else:
    print("Not Found")