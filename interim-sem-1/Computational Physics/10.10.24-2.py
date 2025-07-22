import numpy as num
import matplotlib.pyplot as plt

x_second_hole = num.linspace(0, 90, 100)  
x_fourth_hole = num.linspace(0, 90, 100)  

y_second_hole = 0.58 * x_second_hole - 0.0064 * x_second_hole**2
y_fourth_hole = 2.75 * x_fourth_hole - 0.0306 * x_fourth_hole**2

plt.plot(x_second_hole, y_second_hole, label="Second Hole (30Degrees)", color="black")
plt.plot(x_fourth_hole, y_fourth_hole, label="Fourth Hole (70Degrees)", color="green")

plt.title("Golf Ball Trajectories for Second and Fourth Holes")
plt.xlabel("Horizontal Distance in Meters")
plt.ylabel("Vertical Height in Meters")
plt.legend()

plt.grid(True)
plt.show()