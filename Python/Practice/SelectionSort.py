def getmax(list, e):
    max = 0
    for i in range(e+1):
        if(list[i] > list[max]):
            max = i
            
    return max

def selectionSort(list):
    for i in range(len(list)):
        maxIndex = getmax(list,len(list)-i-1)
        list[len(list) - i - 1], list[maxIndex] =  list[maxIndex], list[len(list) - i - 1]

# list = [2,1,4,6,7,5,3]
list = [23,12,45,67,34,89,57,90]
selectionSort(list)
print(list)