import pandas as pd

df = pd.read_csv('data.csv')

# head() function returns headers and a specified number of rows starting from top
# print(df.head(10)) # To get the data of specified rows

# If the number of rows is not specified it will return 5 rows
# print(df.head())

# print(df.tail(10)) # To get the data of specified number of rows from the bottom

# If number of rows is not specified it prints the last 5 rows
# print(df.tail())

print(df.info()) # It gives more information about the dataset
