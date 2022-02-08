for i in range(4):
    for j in range(4):
        print(" # ",end = " ")
    print(" ")

print()

for i in range(4):
    for j in range(i+1):
        print(" # ",end = " ")
    print(" ")

print()

for i in range(4):
    for j in range(4-i):
        print(" # ",end = " ")
    print(" ")

print()

for i in range(4):
    k = i+1
    for j in range(4-i):
        print(k,end = " ")
        k+=1
    print(" ")