#1 - Plot and Line
plot(c(1, 8), c(3, 10))

#2
plot(1:10)

#3
plot(c(1, 2, 4, 2.5, 10), c(10,5,2.5,4,1))

#4
x <- c(1, 2, 3, 4, 5)
y <- c(3, 7, 8, 9, 12)
plot(x,y)

#5
plot(1:10, type="l")

#6
plot(1:10, main="My Graph", xlab="X-axis", ylab="Y-axis")

#7
plot(1:10, col="red")

#8
plot(1:10, cex=2)

#9 In pch we can use 26 shapes from o to 25
plot(1:10, pch=11, cex=2, col="darkblue")

#10 In lwd we can increase the line width
plot(1:10, type="l", col="darkblue", lwd=2)

## 0 - removes the line
## 1 - displays a solid line
## 2 - displays a dashed line
## 3 - displays a dotted line
## 4 - displays a "dot dashed" line
## 5 - displays a "long dashed" line
## 6 - displays a "two dashed" line

#11
plot(1:10, type="l", lwd=5, lty=2, col="red")

#12
line1 <- c(1,2,3,4,5,10)
line2 <- c(2,5,7,8,9,10)

plot(line1, type = "l", col = "yellow", lwd=2)
lines(line2, type="l", col = "red", lwd=2)

#13 - ScatterPlots
x <- c(5,7,8,7,2,2,9,4,11,12,9,6)
y <- c(99,86,87,88,111,103,87,94,78,77,85,86)

plot(x, y, main="Observation of Cars", xlab="Car Age", ylab="Car Speed")

#14
x1 <- c(5,7,8,7,2,2,9,4,11,12,9,6)
y1 <- c(99,86,87,88,111,103,87,94,78,77,85,86)

# day two, the age and speed of 15 cars:
x2 <- c(2,2,8,1,15,8,12,9,7,3,11,4,7,14,12)
y2 <- c(100,105,84,105,90,99,90,95,94,100,79,112,91,80,85)

plot(x1, y1, main="Observation of Cars", xlab="Car age", ylab="Car speed", col="red", cex=2, pch=10)
points(x2, y2, col="blue", cex=2, pch=11)


