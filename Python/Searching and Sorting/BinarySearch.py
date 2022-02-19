pos = -1

def search(list, n):
    s = 0
    e = len(list) - 1

    while s <= e:
        m = (s + e) // 2 # // is used to get Integer Division

        if list[m] == n:
            globals()['pos'] = m
            return True
        elif list[m] < n:
            s = m + 1
        else:
            e = m - 1
    return False


list = [2, 3, 5, 6, 8, 9, 23, 34, 45, 67, 89, 90]
n = 8

if search(list, n):
    print("Found at",pos)
else:
    print("Not Found")