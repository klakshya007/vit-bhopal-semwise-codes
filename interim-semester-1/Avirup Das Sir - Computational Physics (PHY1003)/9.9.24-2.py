import matplotlib.pyplot as plt
import numpy as num

#Scatter Plot
x=num.array([0,5,10,15,20,25])
y=num.array([12,15,17,22,24,30])

plt.scatter(x,y,color='black')

n=len(x)

#Best Fit Line
sum_y=num.sum(y)
sum_x=num.sum(x)
sum_x2=num.sum(x**2)
sum_xy=num.sum(x*y)

b=(n*sum_xy-sum_x*sum_y) / (n*sum_x2 - sum_x**2)
a=(sum_y - b*sum_x) / n

fit = a+b*x

plt.plot(x,fit,color='green')

plt.xlabel("x")
plt.ylabel("y")
plt.title("Best Fit Line")

plt.grid(True)
plt.show()