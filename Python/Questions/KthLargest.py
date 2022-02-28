import heapq

def kthLarge(arr,k):
    for i in range(k-1):
        arr.remove(max(arr))

    return max(arr)

def kthLargest(arr,k):
    n = len(arr)
    arr.sort()

    return arr[n-k]

def kLarge(arr, k):
    arr = [-elem for elem in arr] # Making each element negative to make a max heap out of it

    heapq.heapify(arr) # To build a Heap
    # print(arr)

    for i in range(k-1): # Removes the max elements till k-1 times
        heapq.heappop(arr)

    # ans = heapq.heappop(arr) * -1

    return -heapq.heappop(arr)


arr = [2,1,3,6,4,7,8,9,10]
k = 5

# print(kthLarge(arr,k))
# print(kthLargest(arr,k))
print(kLarge(arr,k))