from re import I


def TopTenSquare():
     i = 1

    #  for i in range(1,11):
    #      ans = i * i
    #      yield ans

     while i <= 10:
        ans = i * i 
        yield ans
        i += 1


value = TopTenSquare()

for i in value:
    print(i)

# i = 1
# while i <= 10:
#     print(next(value))
#     i += 1


# def TopTenUsingGenerator(): # Generating Iterator using Generator
#     yield 10
#     yield 15
#     yield 20

# value = TopTenUsingGenerator() # Creating a generator object
# # print(value)

# print(value.__next__())
# print(value.__next__())
# print(value.__next__())


