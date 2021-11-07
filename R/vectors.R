#Vectors in strings
fruits <- c("banana","apple","orange")
print(fruits)
print("The length is")
length(fruits)
print("------------------------------")

#Vectors in numbers
numbers <- c(1,2,3)
print(numbers)
print("The length is")
length(numbers)
print("------------------------------")

#Create Number Vector
number <- 1:10;
print(number)
print("The length is")
length(number)
print("------------------------------")

#Vectors in decimal numbers
num1 <- 1.5:8.5
num2 <- 1.5:5.3
print(num1)
print("The length is")
length(num1)
print("------------------------------")
print(num2)
print("The length is")
length(num2)
print("------------------------------")

#Vectors of logic values
log_val <- c(TRUE,FALSE,TRUE,FALSE)
print(log_val)
print("The length is")
length(log_val)
print("------------------------------")

#Sort in a vector
print("Sorting the fruits array");
sort(fruits)
print("------------------------------")
num <- c(13,12,5,6,2,7,9,0,11,3,1,10,4)
print(num)
print("The length is")
length(num)
print("Sorting the above numbers array")
sort(num)
print("------------------------------")

#Accessing the vectors
print("Accessing the first element of fruits")
fruits[1]
print("Accessing the first and third element of fruits")
fruits[c(1,3)]
print("Accessing the all elements except first of fruits")
fruits[c(-1)]
print("------------------------------")

#Change an item in vector
fruits1 <- c("banana","apple","orange","mango","lemon")
print(fruits1)
fruits1[1] <- "pear"
print("First element is changed")
print(fruits1)
print("------------------------------")

#Repeat Vectors
repeat_each <- rep(c(1,2,3),each = 3)
print("Each number is repeated thrice")
print(repeat_each)
print("------------------------------")
repeat_times <- rep(c(1,2,3),times = 3)
print("Each 1,2,3 set is repeated thrice")
print(repeat_times)
print("------------------------------")
repeat_indepent <- rep(c(1,2,3), times = c(5,2,1))
print("Each number is repeated its corresponding times that is 1=>5 times,2=>2 times and 3=>1 time ")
print(repeat_indepent)
print("------------------------------")

#Generating sequenced vectors
num0 <- 1:10
print("Create a sequenced vector")
print(num0)
print("------------------------------")
num_0 <- seq(from = 0, to = 100, by = 25)
print("Create sequence from 0 to 100 by any desired choice of seperation (eg:25)")
print(num_0)
print("------------------------------")
