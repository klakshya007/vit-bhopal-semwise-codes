import numpy as num
import matplotlib.pyplot as plt

x=num.linspace(0,30,10)
y=x**2

plt.figure(figsize=(20,10))
plt.plot(x,y)

print(x)
plt.show()