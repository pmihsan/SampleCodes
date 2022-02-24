def palindrome(s):

    revS = s[::-1]
    
    if s == revS:
        return True
    
    return False

s = "madam"
s1 = "name"
s2 = "hello"
s3 = "malayalam"
s4 = "abcdcba"
print(palindrome(s))
print(palindrome(s1))
print(palindrome(s2))
print(palindrome(s3))
print(palindrome(s4))