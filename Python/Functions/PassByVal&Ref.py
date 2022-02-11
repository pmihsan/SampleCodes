def modify(x):
    print("Address of variable before modifying ", id(x))
    x = 16
    print("Address of variable after modifying ", id(x))
    print("x" , x)

a = 12
print("Address of variable a: ", id(a))
modify(a)
print("a ", a)


def update(lst):
    print("Address of list",id(lst))
    lst[1] = 99
    print(lst , id(lst))

lst = [2,5,6]
print(lst,id(lst))
update(lst)
print(lst,id(lst))
