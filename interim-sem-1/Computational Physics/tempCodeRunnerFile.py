import numpy as num
import matplotlib.pyplot as plt

#Scatter Plot
x=num.array([1,2,3,4])
y=num.array([16,19,23,26])

n=len(x)

plt.scatter(x,y,color='black',label='Data')

#Best Fit Line 

sum_x=num.sum(x)
sum_y=num.sum(y)
sum_x2=num.sum(x**2)
sum_xy=num.sum(x*y)

b=(n*sum_xy-sum_x*sum_y) / (n*sum_x2 - sum_x**2)
a=(sum_y - b*sum_x) / n

fit = a+b*x

plt.plot(x,fit,color='green')

#Labelling
plt.xlabel('x')
plt.ylabel('y')
plt.title('Best Fit Line Graph')

plt.grid(True)
plt.show()