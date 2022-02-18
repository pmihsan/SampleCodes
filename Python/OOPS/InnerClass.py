class Student:

    def __init__(self,name):
        self.name = name
        self.lap = self.Laptop()

    def show(self):
        print("Name",self.name)
        self.lap.show()

    class Laptop:
        def __init__(self):
            self.brand = "Lenovo"
            self.cpu = "amd"
            self.ram = 4

        def show(self):
            print(self.brand,self.cpu,self.ram)

stu1 = Student("PM")
stu2 = Student("PM2")

stu1.show()
stu2.show()

lap = Student.Laptop()

# lap1 = stu1.lap
# lap1.show()

# stu1.lap.show()

# stu1.show()
# stu2.show()