# a = 5
# b = 6

# print(a + b) # It internally calls the default __add__ method to get the result

# Above one is similar to 
# print(int.__add__(a,b))

class Student:

    def __init__(self,m1,m2):
        self.m1 = m1
        self.m2 = m2

    def __add__(self,other):
        mark1 = self.m1 + other.m1
        mark2 = self.m2 + other.m2
        
        stu3 = Student(mark1,mark2)
        return stu3

    def __sub__(self,other):
        mark1 = self.m1 - other.m1
        mark2 = self.m2 - other.m2
        
        stu3 = Student(mark1,mark2)
        return stu3

    def __gt__(self,other):
        mark1 = self.m1 + self.m2
        mark2 = other.m1 + other.m2

        if mark1 > mark2:
            return True
        else:
            return False

    def __str__(self):
        return '{} {}'.format(self.m1,self.m2)


s1 = Student(34,56)
s2 = Student(45,23)

s3 = s1 + s2 # If these are objects of built in class the built in method __add__ would be called
             # But this calls the Students class's __add__ method
print(s3)    # Now this one call the Student class's __str__ method

s3 = s1 - s2 # If these are objects of built in class the built in method __sub__ would be called
             # But this calls the Students class's __sub__ method
print(s3)    # Now this one call the Student class's __str__ method

if s1>s2:  # If these are objects of built in class the built in method __gt__ would be called
           # But this calls the Students class's __gt__ method
    print("S1 is greater")
else:
    print("S2 is greater")

a = 9
print(a.__str__()) # Prints the value of a as a string from int class as a is an int