import numpy as num
import matplotlib.pyplot as plt

y=num.array([350, 400, 50, 600])
x=num.array([61, 26, 7, 2.6])

plt.scatter(x,y,color='black')

#Best Fit Line
log_y=num.log(y)
log_x=num.log(x)
sum_log_x=num.sum(log_x)
sum_log_y=num.sum(log_y)
sum_log_x2=num.sum(log_x**2)
sum_log_x_log_y=sum(log_x*log_y)
n=len(x)

B=(n*sum_log_x_log_y-sum_log_x*sum_log_y) / (n*sum_log_x2 - sum_log_x**2)
A=(sum_log_y - B*sum_log_x) / n

a=num.exp(A)
b=num.exp(B)

print("The Best Fit Value Of 'a':", a)
print("The Best Fit Value Of 'b':", b)

x_fit=num.linspace(min(x),max(x),100)
y_fit=(a*b**x_fit)

plt.plot(x_fit, y_fit, color='green')

#Labelling
plt.xlabel('v')
plt.ylabel('t')
plt.title('Best Fit Line')

plt.legend
plt.grid(True)
plt.show()
