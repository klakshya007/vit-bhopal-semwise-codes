import numpy as num
def distance(a,b,c,d,e):

    a1,a2,a3=a
    b1,b2,b3=b
    c1,c2,c3=c
    d1,d2,d3=d
    e1,e2,e3=e

    ab=num.sqrt((a1-b1)**2+(a2-b2)**2+(a3-b3)**2)
    bc=num.sqrt((b1-c1)**2+(b2-c2)**2+(b3-c3)**2)
    cd=num.sqrt((c1-d1)**2+(c2-d2)**2+(c3-d3)**2)
    de=num.sqrt((d1-e1)**2+(d2-e2)**2+(d3-e3)**2)

    print(ab+bc+cd+de)

a=1,2,3
b=1,1,1
c=1,2,3
d=5,3,2
e=2,4,2
distance(a,b,c,d,e)

