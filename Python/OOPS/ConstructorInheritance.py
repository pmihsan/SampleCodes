class A:
    def __init__(self):
        print("In A")

    def work(self):
        print("A Working")

class B:
    def __init__(self):
        print("In B")

    def work(self):
        print("B Working")

class C(B,A): # Multiple Inheritance
              # Super class is choosen based on priority 
              # that us the one which is on the left of(A,B) 
              # ie leftmost will be given priority

    def __init__(self):
        print("In C")

    def feature(self):
        print("C Working")
        super().__init__()
        super().work() # Call the work() in A if it inherits A 
                       #first else calls B work()

c1 = C()
c1.feature()

# class A:
#     def __init__(self):
#         print("In A")

#     def work(self):
#         print("A Working")

# class B(A):
#     def __init__(self):
#         print("In B")
#         super().__init__()

#     def work(self):
#         print("B Working")
#         super().work() # Here it calls the A Work()

# class C(B): # Single Inheritance

#     def __init__(self):
#         print("In C")
#         super().__init__()

#     def feature(self):
#         print("C Working")
#         super().work() # Here it call the B Work()

# c1 = C()
# c1.feature()
    