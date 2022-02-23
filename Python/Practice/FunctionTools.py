from functools import reduce

def prime(a):
    if(a == 0 or a == 1):
        return False

    for i in range(2,a):
        if(a % i == 0):
            return False
    return True

lists = [2,1,4,5,6,7,3,8,9,0]

primes = []

for i in range(len(lists)):
    if(prime(lists[i])):
        primes.append(lists[i])

print(primes)

# Now to take odd prime number from the set primes

oddPrimes = list(filter(lambda n : n%2 != 0,primes))  
print(oddPrimes)

oddPrimesMul = reduce(lambda a,b : a*b, oddPrimes)
print(oddPrimesMul)