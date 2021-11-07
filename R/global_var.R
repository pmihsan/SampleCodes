"global variable" -> txt
myfunction <- function(){
txt = "fantastic"
paste("R is ",txt)
}

myfunction()
"And outside the functions"
print(txt)
print("--------------------------------------")
"Global Assignment"
my_func <- function(){
txt <<- "fantastic"
paste("R is ",txt)
}
my_func()
print("After the function's global assignment the value of the global variable is")
print(txt)
