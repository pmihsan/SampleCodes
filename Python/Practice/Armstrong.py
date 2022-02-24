num = 101
sum = 0

temp = num

while temp > 0:
    rem = temp % 10
    sum += rem ** 3
    temp = temp // 10

if num == sum:
    print("{} - Armstrong Number".format(num))
else:
    print("{} - Not Armstrong Number".format(num))