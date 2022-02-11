a = 10

# print(id(a))

# def func():
#     print(a)

# print("a ", a, id(a))
# func()

# def func():
#     a = 9 # Here it is a local variable
#     print("Inside function")
#     print(a, id(a))

# func()
# print("Outside function")
# print(a, id(a))


# To use the global varaible alone and not with local variabale

# def func():
#     global a
#     a += 10
#     print("Inside function")
#     print(a, id(a))

# func()
# print("Outside function")
# print(a, id(a))

# To use the global as well as the local variable

print("Global variable a :",a, id(a))
def func():
    a = 9 # local varaiable

    print("Inside Function")
    x = globals()['a']
    print("Value of x", x, id(x)) # Have the same address of the global variable
    print("Value of a",a, id(a))   # Prints the value and address of the local variable
    
func()
print("Outside function")
print("Value of a",a, id(a))
