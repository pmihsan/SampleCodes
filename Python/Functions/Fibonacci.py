def fibo(n):
    a = 0
    b = 1
    if n == 0:
        print(0)
        return
    if n == 1:
        print(1)
        return 
    c = 0
    for i in range(2,n+1):
        c = a + b
        a = b
        b = c

    print(c)

fibo(0)
fibo(1)
fibo(2)
fibo(3)
fibo(4)
fibo(5)
fibo(6)
fibo(7)
