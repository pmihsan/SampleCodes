from abc import ABC, abstractmethod

class A(ABC):
    
    @abstractmethod
    def process(self):
        pass

    def work(self):
        print("Class A Working")


class B(A):
    def process(self):
        print("Class B Processing")
        super().work()

b1 = B()
b1.process()