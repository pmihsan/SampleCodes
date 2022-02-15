
class Computer:

    def __init__(self,ram,processor):
        self.ram = ram
        self.processor = processor
    
    def printConfig(self):
        print("Processor: ",self.processor)
        print("Ram: ",self.ram)


computer1 = Computer("16GB", "I5")
computer2 = Computer("4GB", "AMD")

# print(type(computer1))

computer1.printConfig()
computer2.printConfig()

