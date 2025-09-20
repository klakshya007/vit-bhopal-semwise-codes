import matplotlib.pyplot as plt
import numpy as num

frequency=[4,10,8,4]
x=[65,70,75,80,85]

plt.hist(x[:-1],bins=x,weights=frequency,color='yellow',edgecolor='orange')

plt.xlabel('Weights')
plt.ylabel('Frequency')
plt.title('Historgram Showing Weight Distribution Of 25 Students In A Class')

print(frequency)
plt.show()