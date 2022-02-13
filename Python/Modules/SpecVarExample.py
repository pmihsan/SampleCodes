def fun1():
    print("This is a function1 from " + __name__)

def fun2():
    print("This is a function2 from " + __name__)

def fun3():
    print("This is a function3 from " + __name__)


def fun(): # fun() calls the above three functions
    fun1()
    fun2()
    fun3()

# fun()  # If we run this it will execute the three functions

# To not execute all of them but to execute a particular one being called from another file using import

if __name__ == "__main__":
    fun()

# The above one will be true if we run this current file but if we import this file in another file and we call a particular function it executes that alone