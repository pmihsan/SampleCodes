def search(lis,x,s):
    if s == len(lis):
        return -1

    if lis[s] == x:
        return s
        
    return search(lis,x,s+1)


lis = [2,1,3,5,7,8,9]
x = 10
print(search(lis,x,0))