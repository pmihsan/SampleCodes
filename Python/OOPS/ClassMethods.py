class Student:
    
    school = "Rose"

    def __init__(self,m1,m2):
        self.m1 = m1
        self.m2 = m2
    
    def avg(self):
        return (self.m1+self.m2)/2

    # To get the instance variables we use normal methods
    def objInfo(self):
        print("Marks1:",self.m1)
        print("Marks2:",self.m2)
    
    # To get the static or class variable we use the classmethod
    @classmethod
    def getSchool(cls):
        return cls.school + " School"
    
    # To do some static functions we use static methods
    @staticmethod
    def greet():
        print("Welcome to the Rose School")

stu1 = Student(10,20)
stu2 = Student(40,50)

print(stu1.getSchool()) # Calling the class method

print(stu1.avg())
print(stu2.avg())  # Calling the instance method

# stu1.objInfo()
# stu2.objInfo()

# Calling the static method
Student.greet()



