def divide(a, b):
    print(a/b)

def div(func): # Decorator
    def Large(a, b):
        if a<b:
            a,b = b,a
        return func(a, b)
    return Large

divide = div(divide) # Passing the divide function to the decorator and assigning it to the same

divide(4,2)
divide(2,6)
divide(6,7)
divide(2,10)