import pandas as pd

a = [1,3,5,7]

myVar = pd.Series(a) # Series is a one dimensional array holding data of any type
# It is like creating a single dimensional data frame

# print(myVar)

# print(myVar[0])
# print(myVar[1])
# print(myVar[2])
# print(myVar[3])

myNewVar = pd.Series(a, index = ['w','x','y','z'])

# print(myNewVar)

# print(myNewVar['w'])
# print(myNewVar['x'])
# print(myNewVar['y'])
# print(myNewVar['z'])

# We can also create a Series out of dict

calories = {'d1': 420,'d2':560,'d3':670}

mySer1 = pd.Series(calories)

# print(mySer1) # here the keys of dict acts as index values
# print(mySer1['d1'])

# We can also create a series using particular data as well

mySer2 = pd.Series(calories, index = ['d1','d3'])

# print(mySer2)

# Creating a dataframe from two series

data = {
  "calories": [420, 380, 390],
  "duration": [50, 40, 45]
}

df = pd.DataFrame(data)
print(df)