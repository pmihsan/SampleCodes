min = 999999
max = 0

def minMax(lis,i,j):

    if j-i == 0:
        globals()['min'] = lis[i]
        globals()['max'] = lis[i]

    elif j-i == 1:
        if lis[i] > lis[j]:
            globals()['max'] = lis[i]
            globals()['min'] = lis[j]
        else:
            globals()['max'] = lis[j]
            globals()['min'] = lis[i]

    else:
        m = i + (j - i) // 2

        minMax(lis,i,m)
        l = globals()['max']
        s = globals()['min'] 

        minMax(lis,m,j)
        if s < min:
            globals()['min'] = s
        if l > max:
            globals()['max'] = l


lis = [2,1,4,5,17,3,9,10]
minMax(lis,0,len(lis)-1)
print("Min: {}, Max: {}".format(min,max))