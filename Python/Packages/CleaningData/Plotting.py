import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('dataCorrelations.csv')

# df.plot()

# df.plot(kind = 'scatter', x = 'Duration', y = 'Calories')

# plt.show() # We can see from the plot that they are linearly correlated

# df.plot(kind = 'scatter', x = "Duration", y = "Maxpulse")

# plt.show() # But from this we can see that they are not correlated

# We can use histogram to plot or see the details of a particular column

df['Duration'].plot(kind = 'hist')
plt.show()