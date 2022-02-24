import pandas

dataset = {
    'cars': ['BMW','Benz','Volvo'],
    'mileage': [40,50,45]
}

myVar = pandas.DataFrame(dataset) # Creating a dataframe out of a dictionary

# print(pandas.__version__)

print(myVar)

# print(myVar['cars'])
# print(myVar['mileage'])