import pandas as pd

data = {
  "calories": [420, 380, 390],
  "duration": [50, 40, 45]
}

# We can also create or name the indexes
df = pd.DataFrame(data, index = ['d1','d2','d3']) # Creating a dataframe out of data
print(df)

# We can also locate a particular row using loc-keyword
# print(df.loc[0])

# We can also locate multiple rows using - []
# print(df.loc[[0,1]])

# print(df) # Printing the dataframe with index

# We can access it using indices as well
# print(df.loc['d3'])

# We can also import a csv file as well