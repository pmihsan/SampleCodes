def stonePiles(n):

    list = []
    list.append(n)
    # print(list)

    for i in range(1,n):
        list.append(list[i-1]+2)

    return list

# n = 4
# print(stonePiles(n))

# for i in range(11):
#     print(stonePiles(i))

print(stonePiles(17))

