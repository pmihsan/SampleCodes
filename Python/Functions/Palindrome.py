def palindrome(x): ## Use only small case letters
    s = 0
    e = len(x) - 1

    flag = 0

    while(s < e):
        if(x[s] == x[e]):
            s+= 1
            e-= 1
        else:
            flag = 1
            break

    if flag == 0:
        print("The given string {} is palindrome".format(x))
    else:
        print("The given string {} is not palindrome".format(x))


str = input("Enter a string ")
palindrome(str)


# Alternative

def palin(x):
    str = x[::-1]
    # print(str)
    if str == x:
        print("Given string: {} is palindrome".format(x))
    else:
        print("Given string: {} is not palindrome".format(x))

palin("hello")
palin("malayalam")
palin("nursesrun")
palin("world")