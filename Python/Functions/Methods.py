from functools import reduce

nums = [2,1,4,5,3,6,7,84,9]

evenList = list(filter(lambda n : n % 2 == 0, nums)) # Filters a given list using a single line function
print(evenList)

doubleEvenList = list(map(lambda n : n * 2, evenList)) # Map function changes each value of the list with a given function
print(doubleEvenList)

sum = reduce(lambda a,b : a + b, doubleEvenList) # reduce function from functools reduces a given list to a sigle value based on the given function
print(sum)