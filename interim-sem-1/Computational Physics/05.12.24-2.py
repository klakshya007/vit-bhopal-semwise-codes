#Distance Calculation
import numpy as num

t=num.arange(0,21,2)
v=[0,10,18,25,29,32,20,11,5,2,0]

yeven=[]
yodd=[]

h=t[1]-t[0]

sumeven=0
sumodd=0
for i in range(1,(len(v)-1)):
        if i%2!=0:
            yeven.append(v[i])
            sumodd+=v[i]
        else:
            yodd.append(v[i])
            sumeven+=v[i]


print((h/3)*(v[0]+4*(sum(yeven))+2*(sum(yodd))+v[-1]))
