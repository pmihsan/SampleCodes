# Example for single level Inheritance

class Parent:
    def funA(self):
        print("Function A")

class Child(Parent):
    def funB(self):
        print("Function B")

child1 = Child()

# Here only child class inherits from the parent class

# child1.funA()
# child1.funB()

# Example for multiple Inheritance

class A:
    def funA(self):
        print("Function A")

class B(A):
    def funB(self):
        print("Function B")

class C(B):
    def funC(self):
        print("Function C")

# Creating object of each classes

a1 = A()
b1 = B()
c1 = C()

# C inherits B and B inherits A

# a1.funA()
# b1.funB()
# c1.funC()

# c1.funA()
# c1.funB()
# c1.funC()

# Example for multiple level Inheritance

class First:
    def funA(self):
        print("Function A")

class Second:
    def funB(self):
        print("Function B")

class Third(First,Second):
    def funC(self):
        print("Function C")

three = Third()

# Third class inherits both first and second class

three.funB()
three.funC()
three.funA()