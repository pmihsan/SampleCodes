import math
a = 7

for i in range(2,a):
    if a%i == 0:
        print("Not Prime")
        break
else:
    print("Prime")

for j in range(2,int(math.sqrt(a))):
    if a%j == 0:
        print("Not Prime")
        break
else:
    print("Prime")