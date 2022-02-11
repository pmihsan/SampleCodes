def number(name, age):
    print(name, age)

# number("hello",22)

number(age=22, name = "world")

# Variable number of arguments

def sum(*b):
    sum = 0
    for i in b:
        sum += i
    
    print(sum)

sum(23,12,5,7)

def details(name, **data):
    print(name)
    # print(data)
    for i,j in data.items():
        print(i , ": ", j)

details("hello world", age=22, mobile=234567, city = "Chennai")