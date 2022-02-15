class Car:
    
    wheels = 4 ## This is same for every objects of this class
    # wheels is a static variable of this class

    def __init__(self,comp,mil):
        self.comp = comp
        self.mileage = mil
    # comp and mileage are instance variables of the class


c1 = Car("BENZ",60)
c2 = Car("BMW",70)

# If wheels is changed it affects the other objects as well
Car.wheels = 12

print("Car Company: {} Mileage: {} Wheels: {} ".format(c1.comp,c1.mileage,c1.wheels))
print("Car Company: {} Mileage: {} Wheels: {} ".format(c2.comp,c2.mileage,c2.wheels))