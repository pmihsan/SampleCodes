"""
#1. Write a Python Program to print Prime Numbers between 100 and 200 ( Hint: for loop)
"""

for num in range(100,200):
    if all(num%i!=0 for i in range (2,num)):
        print(num)

"""#2. Write a Sort function to sort the elements in a list"""

l = [24, 55, 78, 64, 25, 12, 22, 11, 1,2,44,3,122, 23, 34]
l.sort(reverse = True)

print(l)

"""#3. Write a sorting function without using the list.sort function (descending order)

"""

data_list =  [24, 55, 78, 64, 25, 12, 22, 11, 1,2,44,3,122, 23, 34]
new_list = []

while data_list:
    minimum = data_list[0]  # arbitrary number in list 
    for x in data_list: 
        if x > minimum:
            minimum = x
    new_list.append(minimum)
    data_list.remove(minimum)    

print(new_list)

"""#4. Write a Python program to print Fibonacci Series"""

def F(n):
    if n == 0: return 0
    elif n == 1: return 1
    else: return F(n-1)+F(n-2)

for i in range(0,12):
  print(F(i))

"""#5. Write a Python program to print a list in reverse"""

li = [21,1,3,4,5,6,7,8,9,19,34,36,48,50,51]

def rev(l):
  return l[::-1]

rev(li)

"""#6. Write a Python program to check whether a string is a Palindrome or not (Hint: A palindrome is a word, phrase, number or sequence of words that reads the same backward as forward. e.g. Madam)"""

def isPalindrome(s): 
      
    # Using predefined function to  
    # reverse to string print(s) 
    rev = ''.join(reversed(s)) 
  
    # Checking if both string are  
    # equal or not 
    if (s == rev): 
        return True
    return False
isPalindrome("madam")

"""Data Scientist Interview
   
   
    Python 

      C
        o
          D
            E
               
                H
                  E
                    R
                      **E**

#7. Write a Python program to print set of duplicates in a list
"""

l = [1,2,3,4,4,5,5,6,1]
print(set([x for x in l if l.count(x) > 1]))

"""#8. Write a Python program to print number of words in a given sentence"""

s = 'I am having a very nice day.'

print(len(s.split()))

"""#9. Given an array arr[] of n elements, write a Python function to search a given element x in arr[]."""

def search(arr, x): 
  
    for i in range(len(arr)): 
  
        if arr[i] == x: 
            return i 
        
    print('Not present in the list')
    


l = [1,2,3,4,4,5,5,6,1]

search(l,4)

"""#10. Write a Python program to implement a Binary Search"""

def binary_search(array, target):
    lower = 0
    upper = len(array)
    while lower < upper:   # use < instead of <=
        x = lower + (upper - lower) // 2
        val = array[x]
        if target == val:
            return x
        elif target > val:
            if lower == x:   # these two are the actual lines
                break        # you're looking for
            lower = x
        elif target < val:
            upper = x




binary_search(l,5)



"""#11. Write a Python program to plot a simple bar chart"""

# import pandas and matplotlib 
import pandas as pd 
import matplotlib.pyplot as plt 

# create 2D array of table given above 
data = [['E001', 'M', 34, 123, 'Normal', 350], 
		['E002', 'F', 40, 114, 'Overweight', 450], 
		['E003', 'F', 37, 135, 'Obesity', 169], 
		['E004', 'M', 30, 139, 'Underweight', 189], 
		['E005', 'F', 44, 117, 'Underweight', 183], 
		['E006', 'M', 36, 121, 'Normal', 80], 
		['E007', 'M', 32, 133, 'Obesity', 166], 
		['E008', 'F', 26, 140, 'Normal', 120], 
		['E009', 'M', 32, 133, 'Normal', 75], 
		['E010', 'M', 36, 133, 'Underweight', 40] ] 

# dataframe created with 
# the above data array 
df = pd.DataFrame(data, columns = ['EMPID', 'Gender', 
									'Age', 'Sales', 
									'BMI', 'Income'] ) 

df.plot.bar() 
  
# plot between 2 attributes 
plt.bar(df['Age'], df['Sales']) 
plt.xlabel("Age") 
plt.ylabel("Sales") 
plt.show()

"""#12. Write a Python program to join two strings (Hint: using join())

"""

# Using join() 
  
# initializing string  
test_string = "GFG"
  
# initializing add_string 
add_string = " is best"
  
# printing original string  
print("The original string : " + str(test_string)) 
  
# printing original add string  
print("The add string : " + str(add_string)) 
  
# Using join() 
# adding one string to another  
res = "".join((test_string, add_string)) 
  
# print result 
print("The concatenated string is : " + res)

"""#13. Write a Python program to extract digits from given string"""

# initializing string 
test_string = "1w3e4r5t6y7u7i8i"
  
# printing original strings   
print("The original string : " + test_string) 
  
# using join() + isdigit() + filter() 
# Extract digit string  
res = ''.join(filter(lambda i: i.isdigit(), test_string)) 
      
# print result 
print("The digits string is : " + str(res))

"""#14. Write a Python program to split strings using newline delimiter"""

# Initialising string 
ini_str = 'This is a test program'
  
# Printing Initial string 
print ("Initial String", ini_str) 
  
# Splitting on newline delimiter 
res_list = (ini_str.rstrip().split(' ')) 
  
# Printing result 
print("Resultant prefix", str(res_list))

"""
#15. Given a string as your input, delete any reoccurring character, and return the new string.
"""

def deleteReoccurringCharacters(string):

  seenCharacters = set()
  outputString = ''
  for char in string:
    if char not in seenCharacters:
      seenCharacters.add(char)
      outputString += char    
  return outputString


deleteReoccurringCharacters("mississippi")
