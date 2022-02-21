def printEvenWords(s):

    s = s.split(' ') # Splits them into String array using spaces
    print(s)

    print("Words of Even Length: ")
    
    for word in s:
        if len(word)%2 == 0: # Choosing only even length words
            print(word, "-",len(word))

s = "Hello this is python program"

printEvenWords(s)