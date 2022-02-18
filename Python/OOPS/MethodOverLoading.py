class A:
    def __init__(self):
        print("Method Over Loading")
        

    def sum(self,a=None,b=None,c=None):
        sum = 0

        if a != None and b != None and c != None:
            sum = a + b + c
        elif a!= None and b != None:
            sum = a + b
        else:
            sum = a

        return sum

a1 = A()

print(a1.sum(5,6,7))
print(a1.sum(6,7))
print(a1.sum(21))
