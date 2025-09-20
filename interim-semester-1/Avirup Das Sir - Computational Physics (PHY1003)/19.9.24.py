def crossproduct(a,b):

    a1,a2,a3=a
    b1,b2,b3=b
    
    x=b3*a2-a3*b2
    y=-(b3*a1-a3*b1)
    z=b2*a1-b1*a3
    print(x,y,z)

#test
a=(1,0,0)
b=(0,0,1)

c=crossproduct(a,b)

import numpy as num
 
d=num.cross(a,b)
print(d)

    


