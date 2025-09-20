import numpy as np
import math
#vector
a = np.array([1,1,1])
b = np.array([-1,-1,-1])

#initialize
c=0
#useing loop
for i in range (3):
    c += a[i]*b[i]

print(c)