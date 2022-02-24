import pandas as pd

# df = pd.read_csv('dataW3.csv')

# newDF = df.dropna() # To drop rows containing empty cells

# print(newDF.to_string()) # Contains all the rows with non-empty cell

df = pd.read_csv('dirtydata.csv')

# newDF = df.dropna() # To drop rows containing empty cells
# It will not change the original dataframe
# To change the original dataframe we use inlace = true

# df.dropna(inplace = True) # InPlace removing the rows containing empty cells

# print(df.to_string()) # Contains all the rows with non-empty cell
# It will remove all rows containg NULL values from the original DataFrame

# Instead of removing the empty cells with null values
# We can fill them up with some values

# df.fillna(130,inplace=True)
# print(df.to_string())

# We can also replace the empty cells with values for a particular column as well
# df['Calories'].fillna(130, inplace = True)
# print(df.to_string())

# We can also fill these empty cells with mean, median as well as mode
# Fill it using Mean
# Mean = the average value (the sum of all values divided by number of values).

# x = df["Calories"].mean()
# df['Calories'].fillna(x, inplace = True)
# print(x)

# Fill it using Median
# Median = the value in the middle, after you have sorted all values ascending.

# y = df["Calories"].median()
# df['Calories'].fillna(y, inplace = True)
# print(y)

# Fill it using Mode
# Mode = the value that appears most frequently.

z = df["Calories"].mode()[0]
df['Calories'].fillna(z, inplace = True)
print(z)

print(df.to_string())
