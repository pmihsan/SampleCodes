def removeThird(list):
    
    while len(list) > 0:
        if(len(list) > 2):
            print(list.pop(2))
        else:
            print(list.pop())
        print(list)
        


list = [23,12,45,67,21,54,56,78]
print(list)

removeThird(list)