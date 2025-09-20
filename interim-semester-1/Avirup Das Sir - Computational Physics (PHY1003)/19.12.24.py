#Plot For The Given Eqn Q4
import numpy as num
import matplotlib.pyplot as plt
a=1
omega=3
t=num.linspace(0, 10, 100)
velocity = a*omega*num.cos(omega*t)
acceleration=-a*omega**2*num.sin(omega*t)
plt.figure(figsize=(10, 6))
#Use Subplot To Plot In The Same Page
plt.subplot(2, 1, 1)
plt.plot(t, velocity, label='Velocity')
plt.xlabel('Time')
plt.ylabel('Velocity')
plt.grid(True)
plt.subplot(2, 1, 2)
plt.plot(t, acceleration, label='Acceleration')
plt.xlabel('Time')
plt.ylabel('Acceleration')
plt.grid(True)
plt.show()