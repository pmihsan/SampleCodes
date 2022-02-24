def power(x,y):
    if(y == 1):
        return x
    return x * power(x,y-1)

x = 7
y = 3

print(power(x,y))

# ans = 1

# while y > 0:
#     ans = ans * x 
#     y -= 1

# print(ans)