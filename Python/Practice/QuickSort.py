def quicksort(list,s,e):
    if s >= e:
        return

    low = s
    high = e

    mid = low + (high - low)//2
    pivot = list[mid]
    # print(mid,pivot)

    while low <= high:

        while list[low] < pivot:
            low += 1

        while list[high] > pivot:
            high -= 1

        if low <= high:
            temp = list[low]
            list[low] = list[high]
            list[high] = temp
            low += 1
            high -= 1
    
    quicksort(list,s,high)
    quicksort(list,low,e)


list = [2,1,4,5,3,6,7]
quicksort(list,0,len(list)-1)
print(list)