# def square(a): # One line function so instead of this we can use lambda expressions
#     return a*a
    
# res = square(5)
# print(res)

func = lambda a : a*a*a
x = 6
cube = func(x)
print(cube)

sqre = lambda a : a*a
sq = sqre(x)
print(sq)

add = lambda a,b,c,d : a+b+c+d
result = add(2,6,7,8) 
print(result)