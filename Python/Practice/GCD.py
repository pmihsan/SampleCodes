a = 4
b = 6
aa = a
bb = b

rem = a % b

while(rem != 0):
    a = b
    b = rem
    rem = a % b

print("Gcd of {},{} is {}".format(aa,bb,b))