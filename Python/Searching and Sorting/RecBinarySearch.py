def search(lis, x, s, e):
    if(s > e):
        return -1
    
    m = s + (e - s) // 2

    if lis[m] == x:
        return m

    elif lis[m] < x:
        return search(lis,x,m+1,e)

    return search(lis,x,s,m+1)

lis = [1,2,3,4,5,6,7,8,9,10]
x = 12

print(search(lis,x,0,len(lis)-1))