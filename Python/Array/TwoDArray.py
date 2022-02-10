from numpy import *

arr1 = array([
                [1,2,3],
                [4,5,6]
            ])

print(arr1.ndim) # Gives the dimension

print(arr1.shape) # Gives the rows and columns of the matrix

print(arr1.size) # Gives the number of elements of the array

# arr2 = arr1.flatten() # Converts 2D array into 1D array
# print(arr2)

arr = array([
                [1,2,3,4],
                [5,6,7,8],
                [2,6,7,9]
            ])

arr2 = arr.flatten() # Converts 2D array into 1D array
print(arr2)

print()
arr3 = arr.reshape(2,2,3) # Reshape the array into a 3D array
print(arr3)   # 2 - Two Dimensuional array having 2 rows and 3 columns
print()

mat = matrix('1 2 3; 6 4 5;1 6 7') # Another method to create matrix

print(mat)
print()

print(diagonal(mat)) # Diagonal elements of the given matrix

print(mat.min(), mat.max()) # Matrix Minimum and Maximu element

print()
print("Matrix Multiplcation")

m1 = matrix('1 2 3;3 4 5;1 6 7')
m2 = matrix('2 3 1;4 2 1;5 6 7')

m3 = m1 * m2
print()
print(m3)