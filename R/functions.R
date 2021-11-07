myfunc <- function(){
	print("Hello World!")
}
myfunc();
print("---------------------")
my_func <- function(fname){
	paste("Welcome",fname)
}
my_func("Peter")
my_func("Lois Lane")
my_func("Hemsworth")
print("---------------------")
myfunction <- function(x){
return(5 * x)
}
print(myfunction(3))
print(myfunction(5))
print(myfunction(10))
print("---------------------")
nested_func <- function(x,y){
	a <- x + y
	return (a)
}
nested_func(nested_func(2,2),nested_func(3,3))
print("---------------------")
outer_func <- function(x){
	inner_func <- function(y){
		a <- x * y
		return (a)
	}
	return(inner_func)
}
output <- outer_func(3)
output(5)
print("---------------------")
recursion <- function(k){
	if(k > 0){
		result <- k + recursion(k -1)
		print(result)
	}else {
		result = 0
		return(result)
	}
}
recursion(2)
print("---------------------")
