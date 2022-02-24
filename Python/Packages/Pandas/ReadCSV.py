import pandas as pd

df = pd.read_csv('data.csv') # Creating a dataframe out of the csv file
 
# print(df.to_string()) # To print the entire dataframe

# print(df) # If dataframe contains lots of data it returns only the first and last 5 rows

print(pd.options.display.max_rows) # If exceeded it displays only the first and last 5 rows of the dataframe

# We can also change the max_row size

pd.options.display.max_rows = 9000

print(pd.options.display.max_rows) # Now it can print the maximum number of rows we specified

