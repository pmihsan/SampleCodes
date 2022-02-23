class Maths:

    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c

    def __add__(self,otherObj):
        a1 = self.a + otherObj.a
        b1 = self.b + otherObj.b
        c1 = self.c + otherObj.c

        m3 = Maths(a1,b1,c1)
        return m3

    def __sub__(self,otherObj):
        a1 = self.a - otherObj.a
        b1 = self.b - otherObj.b
        c1 = self.c - otherObj.c

        m4 = Maths(a1,b1,c1)
        return m4


    def __gt__(self,otherObj):
        sum1 = self.a + self.b + self.c
        sum2 = otherObj.a + otherObj.b + otherObj.c

        return sum1 > sum2

    def __eq__(self,otherObj):
        sum1 = self.a + self.b + self.c
        sum2 = otherObj.a + otherObj.b + otherObj.c

        return sum1 == sum2

    def __str__(self):
        return "a - {},b - {},c - {}".format(self.a,self.b,self.c)



m1 = Maths(23,12,14)
m2 = Maths(12,23,14)

# print(str(m1))
# print(m1.__str__())

res = m1 + m2
# print(res)

sub = m1 -  m2
# print(sub)

# if(m1 > m2):
#     print("m1 is greater")
# else:
#     print("m2 is greater")

if(m1 == m2):
    print("m1 is equal to m2")
else:
    print("m1 is not equal to m2")
