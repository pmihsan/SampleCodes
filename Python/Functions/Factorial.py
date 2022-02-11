def fact(n):
    ans = 1
    for i in range(1,n+1):
        ans *= i
    print(ans)

x = 5
for i in range(1,x+1):
    fact(i)