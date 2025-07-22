import matplotlib.pyplot as plt
import numpy as num

#Scatter Plot
x=num.array([50,450,780,1200,4400,4800,5300])
y=num.array([28,30,32,36,51,58,69])

plt.scatter(x,y,color='black')

#Best Fit Line

log_y=num.log(y)
sum_x=num.sum(x)
sum_log_y=num.sum(log_y)
sum_x_log_y=num.sum(x*log_y)
sum_x2=num.sum(x**2)
n=len(x)

B=(n*sum_x_log_y-sum_x*sum_log_y) / (n*sum_x2 - sum_x**2)
A=(sum_log_y - B*sum_x) / n

a=num.exp(A)
b=num.exp(B)

print("A:",a )
print("B:", b)

x_fit=num.linspace(min(x),max(x),100)
y_fit=(a*b**x_fit)

plt.plot(x_fit, y_fit, color='green')

#Labelling
plt.xlabel('Altitude')
plt.ylabel('Dose Of Radiation')
plt.title('Best Fit Line')

#Dose Of Radiation At 3000 Feets
altitude=3000
prediction=a*b**altitude
print("Predicted Dose At 3000 Feets:",prediction)

plt.grid(True)
plt.show()



