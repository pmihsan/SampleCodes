import pandas as pd

df = pd.read_csv("dirtydata.csv")

# print(df)

# In our csv file we have incorrect format in date column
# To convert it into corresponding datatype we have to_datetime() method

df['Date'] = pd.to_datetime(df['Date']) 
# This would change all the incorrect formats to a correct one
# print(df.to_string())

# Now incorrect data would be corrected 
# But empty cells contain NaT(Not a Time) value

# Since NaT denotes NULL value we can removeit using dropna() method

df.dropna(subset=['Date'], inplace = True)

# print(df.to_string()) # Now it will remove the rows containing null values

# Now To Remove Wrong Data
# df.loc[7, 'Duration'] = 45
# print(df)

# For larger dataset we cannot do it manually
# So we have to set some boundary conditions

# for x in df.index:
#     if df.loc[x, "Duration"] > 120:
#         df.loc[x, "Duration"] = 120

# print(df.to_string())

# The above one is for changing the dataset
# Instead we can remove such rows to make out dataset efficient

# So we remove the rows containing wrong data
# for x in df.index:
#     if df.loc[x, "Duration"] > 120:
#         df.drop(x, inplace = True)

# print(df.to_string()) # It would remove the row with wrong data

# Removing Dulicates also helps us in making an efficient dataset
# So we can find duplicates of a dataset using duplicated method

# print(df.duplicated()) # It returns true if a row is  duplicated 

# We can remove duplicates using drop_duplicates() method
df.drop_duplicates(inplace = True)
# This will remove the rows that are duplicated
print(df.to_string())