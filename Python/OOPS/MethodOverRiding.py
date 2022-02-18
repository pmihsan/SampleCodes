class A:
    def work(self):
        print("In A Working")

class B(A): # class B inherits B
            # OverRiding occurs when parent and child classes having a function with same name and arguments
            # Proority is given to the child class
            # Therby work() method in B overrides the work() method in A
    def work(self):
        print("In B Working")
        # super().work() # Calls the parent class A's work() method


b1 = B()

b1.work()