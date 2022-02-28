def uniqueChar(s):
    
    unique = set(s)
    s1 = ''
    
    for i in unique:
        s1 += i

    return s1

def uniqueCharacters(s):
    
    uniqueSet = set()
    result = ""

    for ch in s:
        if ch not in uniqueSet:
            uniqueSet.add(ch)
            result += ch

    return result

s = "mississippi"
# print(uniqueChar(s))
print(uniqueCharacters(s))