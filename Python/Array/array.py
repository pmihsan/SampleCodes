from array import *

val = array('i',[3,2,4,1,2])
# print(val)

for element in val:
    print(element)

val.append(23)          #Appends element at the end of the array

print(val.buffer_info()) #Prints the address and size of the array 

print(val.index(3))     #Prints the index of the corresponding value

print(val.count(4))     #Count the no of occurences of the given element

val.insert(1,34)        #Inserts element at a particular index
print(val)

val.remove(23)          #Removes the given element from the array
print(val)

val.reverse()           #Reverse the contents of the array
print(val)