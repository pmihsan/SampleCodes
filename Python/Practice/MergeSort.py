def merge(list,s,mid,e):
    len = e - s
    mix = []
    i = s
    j = mid

    while i < mid and j < e:
        if list[i] < list[j]:
            mix.append(list[i])
            i += 1
        else:
            mix.append(list[j])
            j += 1

    while i < mid:
        mix.append(list[i])
        i += 1

    while j < e:
        mix.append(list[j])
        j += 1
    
    for l in range(len):
        list[s + l] = mix[l]

def mergesort(list,s,e):
    if e == s + 1:
        return

    mid = s + (e - s) // 2
    
    mergesort(list,s,mid)
    mergesort(list,mid,e)
    
    merge(list,s,mid,e)

    return


# list = [2,1,4,5,3,6,7]
list = [23,12,56,7,34,67]
mergesort(list,0,len(list))
print(list)