#3D Plot

from mpl_toolkits import mplot3d
import numpy as num
import matplotlib.pyplot as plt

fig=plt.figure(figize=(10,7))

ax=plt.axes(projection='3d')

z=num.linspace(0,1,100)
x=z*num.sin(25*z)
y=z*num.cos(25*z)

ax.plot3D(x,y,z,'green')
ax.set_title("3D line plot geeks for geeks")
plt.show()