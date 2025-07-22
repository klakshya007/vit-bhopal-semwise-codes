def triple_product(a,b,c):
    a1,a2,a3=a
    b1,b2,b3=b
    c1,c2,c3=c

    x=c3*b2-b3*c2
    y=-(c3*b1-b3*c1)
    z=c2*b1-b2*c1
    print(x,y,z)

    d=x,y,z

    s=x*a1+y*a2+z*a3

    print(s)

a=(1,3,4)
b=(3,4,8)
c=(6,2,1)
triple_product(a,b,c)

import numpy as num

f=num.cross(b,c)
d=num.dot(a,f)
print(d)