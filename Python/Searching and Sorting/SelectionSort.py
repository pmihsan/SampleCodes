def sort(list):

    for i in range(len(list) - 1):
        minPos = i
        for j in range(i,len(list)):
            if list[j] < list[minPos]:
                minPos = j
        
        # Swap with the minimum position
        temp = list[i]
        list[i] = list[minPos]
        list[minPos] = temp
        print(list)

# def sort(list):

#     for i in range(len(list)):
#         minPos = MinimumIndex(list,i)
#         temp = list[minPos]
#         list[minPos] = list[i]
#         list[i] = temp

# def MinimumIndex(list,j):
#     min = list[j]
#     ind = j
#     for i in range(j,len(list)):
#         if min > list[i]:
#             min = list[i]
#             ind = i

#     return ind
            
list = [2, 1, 6, 3, 8, 9, 5, 4, 10]

sort(list)

# print(list)