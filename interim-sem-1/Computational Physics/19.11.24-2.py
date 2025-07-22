#graphical method
import numpy as num
import math 
import matplotlib.pyplot as plt

def f1(x):
    return 3-x

def f2(x):
   return math.e**(x-1)

X=num.arange(1,2.01,.01)
Y1=f1(X)
Y2=f2(X)

print(X,Y1,Y2)

plt.plot(X,Y1,color='green')
plt.plot(X,Y2,color='black')
plt.show()

