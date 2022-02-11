def count(lst):
    e = 0
    o = 0

    for i in lst:
        if i%2 == 0:
            e += 1
        else:
            o += 1
    return e,o

n = int(input("Enter the size "))

lst = []
for i in range(n):
    x = int(input("Enter a value ")) 
    lst.append(x) 

even,odd = count(lst)

print("Even : {} and Odd : {}".format(even,odd))