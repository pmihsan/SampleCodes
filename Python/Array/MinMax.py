from array import *

arr = array('i', [21,5,12,7,8])

# print(min(arr))
# print(max(arr))

minimum,maximum = arr[0],arr[0]

for element in arr:
    if(element < minimum):
        minimum = element
    if(element > maximum):
        maximum = element

print(minimum)
print(maximum)

print(sorted(arr))
