f = open("message.txt", 'r')

f1 = open("messageCopy.txt", 'w')

for i in f:
    f1.write(i) # Writes the data on messeage to another file
    # Similar to copying a file