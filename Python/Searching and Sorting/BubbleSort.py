def sort(list):

    for i in range(len(list)- 1,0,-1):
        for j in range(i):
            if list[j] > list[j+1]:
                temp = list[j]
                list[j] = list[j+1]
                list[j+1] = temp
        print(list)
    return
    
    # for i in range(len(list)):
    #     for j in range(i+1,len(list) - 1):
    #         if list[j] < list[i]:
    #             temp = list[i]
    #             list[i] = list[j]
    #             list[j] = temp
    # return

list = [20, 1, 6, 3, 8, 9, 12, 13, 11, 5, 2]

sort(list)

# print(list)