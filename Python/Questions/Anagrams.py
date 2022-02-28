from collections import Counter

def anagrams(s1,s2):
    if(len(s1) != len(s2)):
        return False
    f1 = {}
    f2 = {}

    for ch in s1:
        if ch in f1:
            f1[ch] += 1
        else:
            f1[ch] = 1

    for ch in s2:
        if ch in f2:
            f2[ch] += 1
        else:
            f2[ch] = 1

    # print(f1)
    # print(f2)

    for key in f1:
        if key not in f2 or f2[key] != f1[key]:
            return False

    return True


def are_ana(s1,s2):
    if(len(s1) != len(s2)):
        return False

    # print(Counter(s1))
    # print(Counter(s2))

    return Counter(s1) == Counter(s2)


def are_anagrams(s1,s2):
    if(len(s1) != len(s2)):
        return False

    # print(sorted(s1))
    # print(sorted(s2))
    
    return sorted(s1) == sorted(s2)


# s1 = "garden"
# s2 = "adenra"

# s1 = "garden"
# s2 = "adenrg"

s1 = "nameless"
s2 = "lessname"

print(anagrams(s1,s2))
print(are_ana(s1,s2))
print(are_anagrams(s1,s2))