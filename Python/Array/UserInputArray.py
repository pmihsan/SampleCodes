from array import *

arr = array('i', [])

n = int(input("Enter the size of the array "))

sum = 0
for i in range(n):
    x = int(input("Enter the value "))
    arr.append(x)
    sum += arr[i]

print(sum)
