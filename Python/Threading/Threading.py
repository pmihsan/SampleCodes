from time import sleep # To Have a time delay 
from threading import * # To Perform MultiThreading

class Greet1(Thread):

    def run(self):
        for i in range(5):
            print("Greeting1 From Python Threading")
            sleep(1) # After printing it delays for 1 sec

class Greet2(Thread):

    def run(self):
        for i in range(5):
            print("Greeting2 From Python Threading")
            sleep(1) # After printing it delays for 1 sec


g1 = Greet1()
g2 = Greet2()

g1.start() # Internally it calls the run Method
sleep(0.2) # After calling it delays for 0.2 sec
g2.start() # Internally it calls the run Method

g1.join() # This is to avoid the execution of the main thread before completion of the other threads
g2.join()

print("Exiting...")


# Output:

# Greeting1 From Python Threading
# Greeting2 From Python Threading
# Greeting1 From Python Threading
# Greeting2 From Python Threading
# Greeting1 From Python Threading
# Greeting2 From Python Threading
# Greeting1 From Python Threading
# Greeting2 From Python Threading
# Greeting1 From Python Threading
# Greeting2 From Python Threading
# Exiting...

# The above output shows that the execution of two threads simultaneously with some delays
# And After Exiting out of the two threads it run the main thread print statement to exit out of the program