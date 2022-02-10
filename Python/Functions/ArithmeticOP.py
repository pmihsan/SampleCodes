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

print(add(1,2))

print(sub(2,5))

print(mul(1,2))

print(divide(7,0))

print(rem(20,7))

print(power(3,4))