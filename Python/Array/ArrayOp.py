from numpy import *

arr1 = array([1,2,3,4,5])
arr2 = array([5,4,3,2,1])

# arr = arr1 + arr2
# arr = arr1 - arr2
# arr = arr1 * arr2
# arr = arr1 / arr2

# print(arr)

print(sin(arr1)) # Sine value of all the elements in tha array

print(cos(arr1)) # Cosine value of all the elements in the array

print(log(arr1)) # Log value of all the elements in the array

print(sqrt(arr1)) #Square root of all the elements in the array 

print(sum(arr1)) # Sum of the array elements

print(min(arr1)) # Minimum element of the array

print(max(arr1)) # Maximum element of the array

print(concatenate([arr1,arr2])) # Concatenate two arrays

val1 = array([2,5,6,1,2])

val2 = val1 # Not copying here but referencing the array with another variable

print(val1,val2)
print(id(val1), id(val2)) # Both the address of the array would be same

val3 = val1.view() # Shallow Copying because the two array ar still connected

print(id(val3), id(val1)) # Eventhough address of the two arrays are different they are still linked 

val1[0] = 99
print(val3, val1) # Changing val1 element after copying to val3 still affects val3

# val1 = [99  5  6  1  2]
val4 = val1.copy() # Deep Copying allows you to perfectly copy an array elements to the other

print(id(val3), id(val1)) # Addresses are different 

val1[0] = 98 
print(val4, val1) # Changing val1 element does affect the copied array
