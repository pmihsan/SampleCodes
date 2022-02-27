from numpy import *

# mat = matrix("1 2 3; 4 5 6; 7 8 9")
# print(mat)

arr = array([
                [1,2,3],
                [4,5,6],
                [7,8,9]
])

arr2 = array([
                [0,0,0],
                [0,0,0],
                [0,0,0]
])
print(arr)
for i in range(len(arr)):
    for j in range(len(arr[0])):
            arr2[i][j] = arr[j][i]

print()    
print(arr2)