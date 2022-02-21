def swapList(list):

    n = len(list)

    list[0],list[n-1] = list[n-1],list[0]

    # temp = list[0]
    # list[0] = list[n-1]
    # list[n-1] = temp 

list = [2,1,5,3,6,7]

swapList(list)
print(list)