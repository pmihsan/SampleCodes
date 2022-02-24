from re import M


a = 4
b = 6

m = 0
if a > b:
    m = a
else:
    m = b

while 1: 
    if m % a == 0 and m % b == 0:
        lcm = m
        break
    m += 1

print("Lcm of {},{} is {}".format(a,b,lcm))