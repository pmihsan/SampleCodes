class Computer:

    comp = "Laptop" # This is a static variable or (class variable)
    def __init__(self):
        self.name = "Lenovo"
        self.os = "Ubuntu"
    # The name and os are instance variables
    # This name and os will be same for every objects

    def compare(self,other):
        if(self.name == other.name):
            return True
        else:
            return False

c1 = Computer()

c2 = Computer()
c2.name = "HP"
c2.os = "Win 10"

if c1.compare(c2):
    print("Same ",Computer.comp)
else:
    print("Different ",Computer.comp)
        