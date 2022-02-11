def fibo(n):
    if n == 0:
        return 0
    if n == 1 or n == 2:
        return 1
    return fibo(n-1) + fibo(n-2)


for i in range(11):
    ans = fibo(i)
    print("Fibo of {}: {}".format(i,ans))