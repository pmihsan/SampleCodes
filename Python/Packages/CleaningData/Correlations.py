import pandas as pd

df = pd.read_csv("dataCorrelations.csv")

print(df.corr()) # Neglects non-numeric values
# Returns a table with relationship between each and every columns
# The number varies from -1 to 1.

# 1 means that there is a 1 to 1 relationship (a perfect correlation), and for this data set, each time a value went up in the first column, the other one went up as well.
# 0.9 is also a good relationship, and if you increase one value, the other will probably increase as well.
# -0.9 would be just as good relationship as 0.9, but if you increase one value, the other will probably go down.
# 0.2 means NOT a good relationship, meaning that if one value goes up does not mean that the other will.

# We can see that any column with itself is perfectly correlated

# Good Correlation
# "Duration" and "Calories" got a 0.922721 correlation, 
# which is a very good correlation, and 
# we can predict that the longer you work out, 
# the more calories you burn, and the other way around: 
# if you burned a lot of calories, you probably had 
# a long work out.

# Bad Correlation
# "Duration" and "Maxpulse" got a 0.009403 correlation, 
# which is a very bad correlation, meaning that 
# we can not predict the max pulse by just 
# looking at the duration of the work out, and vice versa.

