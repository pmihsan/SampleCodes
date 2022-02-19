# Checking  for Exception 

a = 12
b = 0

try:
    print("Executing a try Statement")
    print(a / b) # If This fails it goes to except statement for Zero division Error Else it continues to next step
    k = int(input("Enter a number: ")) # If other than int data is given it goes to Value Error Exception
    print(k)

except ZeroDivisionError as e:
    print("You are dividing a number by zero: Python Exception ==>",e)

except ValueError as e:
    print("Invalid Datatype: Python Exception ==>",e)

except Exception as e:
    print("Python Exception ==>",e)

finally: # Whether 'try' gets executed or 'except' executed ==> 'finally' definitely gets executed
    print("Finished Executing Exception Handling")
