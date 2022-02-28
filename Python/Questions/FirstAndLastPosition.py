from numpy import *

def firstAndLast(arr,target):
    for i in range(len(arr)):
        if(arr[i] == target):
            start = i
            # while i < len(arr) and arr[i] == target:
            #     i += 1
            # return [start, i-1]
            while i+1 < len(arr) and arr[i+1] == target:
                i += 1
            return [start, i]
    return [-1, -1]

def findStart(arr, target):
    if arr[0] == target:
        return 0

    left = 0
    right = len(arr) - 1

    while(left <= right):
        mid = (left + right) // 2
        if(arr[mid] == target and arr[mid - 1] < target):
            return mid
        elif(arr[mid] < target):
            left = mid + 1
        else:
            right = mid - 1
    return -1

def findEnd(arr, target):
    if arr[-1] == target:
        return len(arr)-1

    left = 0
    right = len(arr) - 1

    while(left <= right):
        mid = (left + right) // 2
        if(arr[mid] == target and arr[mid + 1] > target):
            return mid
        elif(arr[mid] > target):
            right = mid - 1
        else:
            left = mid + 1
    return -1

def first_and_last(arr,target):
    if(len(arr) == 0 or arr[0] > target or arr[-1] < target):
        return [-1, -1]

    start = findStart(arr,target)
    end = findEnd(arr, target)
    return [start, end]

arr = array([1,3,4,5,6,6,6,6,7,8,9])
target = 6
print(firstAndLast(arr,target))
# print(findStart(arr,target))
# print(findEnd(arr,target))
print(first_and_last(arr,target))