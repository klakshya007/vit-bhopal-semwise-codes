#Plot For The Given Eqn Q2


import numpy as num
import matplotlib.pyplot as plt


u=19.6
g=9.8  


t = num.arange(0, 4.1, 0.1)


h = u*t-0.5*g*t**2


plt.plot(t, h)
plt.xlabel('Time (s)')
plt.ylabel('Height (m)')
plt.title('Trajectory of a Vertically Thrown Ball')
plt.grid(True)
plt.show()