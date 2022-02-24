year = 2022

if(year % 4 == 0):
    if(year % 100 == 0):
        if(year % 400 == 0):
            print("{} - Leap year".format(year))
        else:
            print("{} - Not Leap year".format(year))
    else:
        print("{} - Leap year".format(year))
else:
    print("{} - Not Leap year".format(year))