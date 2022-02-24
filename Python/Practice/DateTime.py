from datetime import *

dt = datetime.now()

# print(dt) # prints year-month-date hr:min:sec.micro sec

print(dt.strftime("%Y-%m-%d %H:%M:%S"))