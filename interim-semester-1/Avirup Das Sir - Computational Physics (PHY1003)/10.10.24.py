#Rabbit
import numpy as num
import pandas as ps

def position_x(t):
    return -0.31 * t**2 + 7.2 * t + 28

def position_y(t):
    return 0.22 * t**2 - 9.1 * t + 30

t_minutes=num.arange(0,120,5)
t_seconds=t_minutes*60

x_coords=position_x(t_seconds)
y_coords=position_y(t_seconds)

import matplotlib.pyplot as plt

plt.figure(figsize=(10, 6))
plt.plot(x_coords, y_coords, linestyle='-', color='g')

plt.title("Trajectory")
plt.xlabel("x_coord")
plt.ylabel("y_coord")
plt.grid(True)

plt.show()

for t_minutes, x_coords, y_coords in zip(t_minutes, x_coords, y_coords):
    print(f"At t = {t_minutes} minutes, Position: x = {x_coords:.2f} meters, y = {y_coords:.2f} meters")


