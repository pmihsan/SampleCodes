from math import *

def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mul(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        print("Can't Divide with zero")
        return 0
    return x/y

def rem(x, y):
    return x % y

def power(x,y):
    # ans = 1
    # for i in range(1,y+1):
    #     ans *= x
    # return ans

    return x ** y

def logarithmic(x):
    return log(x)

def squareRoot(x):
    return sqrt(x)