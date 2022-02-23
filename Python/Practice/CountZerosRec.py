def count(lis,s,z):

    if(s == len(lis)):
        return z
        
    if(lis[s] == 0):
        return count(lis,s+1,z+1)

    return count(lis,s+1,z)

lis = [1,2,5,0,3,4,0,5,6,0,7,8]
print(count(lis,0,0))