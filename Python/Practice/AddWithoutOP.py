def add(a,b):
    
    while b != 0:
        carry = a & b
        a = a ^ b
        b = carry << 1
    return a 

def add2(a,b):

    for i in range(b):
        a += 1
    return a

print(add(5,2))

print(add2(20,40))