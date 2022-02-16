class Car:
    
    wheels = 4
    
    def  __init__(self, company, model, mileage):
        self.company = company
        self.model = model
        self.mileage = mileage 
    
    # def  __init__(self):
    #     self.company = "AUDI"
    #     self.model = "A4"
    #     self.mileage = 60

    # def __init__(self, company, model):
    #     self.company = company
    #     self.model = model
    #     self.mileage = 40
    
    def getDetails(self):
        print("Car ==> Company: {}, Model: {}, Mileage: {}".format(self.company,self.model,self.mileage))

    def set2M(self,model,mileage):
        self.model = model
        self.mileage = mileage


# car1 = Car()
# car1.getDetails()

car2 = Car("Benz","B5",50)
car2.getDetails()

car2.set2M("AZ", 56)
car2.getDetails()