import matplotlib.pyplot as plt
from scipy import stats
import numpy as num

voltage_range=num.arange(0,20,.5)
resistance1= 10
resistance2=5
current_1=voltage_range / resistance1
current_2=voltage_range /resistance2
print(current_1)
print(current_2)

plt.scatter(voltage_range,current_1)
plt.scatter(voltage_range,current_2)

#best fit line for straight line
sumx=num.sum(range(0,21))
sumy=num.sum(range(0,10))
print(sumx , sumy)
sumx2=num.sum(voltage_range*voltage_range)
sumxy=num.sum(voltage_range*current_1)
n=20
b=((n*sumxy-sumx*sumy) / (n*sumx2-(sumx)**2))
a=(sumy-b*sumx)/n

y_fit=(a+b*voltage_range)

plt.plot(voltage_range,y_fit,color='black')

#Labelling

plt.xlabel('voltage_range')
plt.ylabel('resistance1')
plt.title("Best Fit Line")

plt.grid(True)
plt.show()