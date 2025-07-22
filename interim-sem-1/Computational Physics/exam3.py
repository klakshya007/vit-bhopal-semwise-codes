#Plot Trajectory
import numpy as num
import matplotlib.pyplot as plt

vini=19.6
theta_radians=num.radians(num.degrees(30))
g=9.8

vxini=vini*num.cos(theta_radians)
vyini=vini*num.sin(theta_radians)

t_flight=2*vyini/g

t=num.linspace(0,t_flight,100)

distx=vxini*t

disty=vyini*t-.5*g*t**2

plt.plot(distx,disty)
plt.show()
