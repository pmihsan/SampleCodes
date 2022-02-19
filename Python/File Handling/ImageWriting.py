f = open("ios.jpg", 'rb') # Read binary data of the image

f1 = open("iosCopy.jpg", 'wb') # Write binary data of the image

for i in f:
    f1.write(i) # Writes the binary data on image to another file
    # Similar to copying a file