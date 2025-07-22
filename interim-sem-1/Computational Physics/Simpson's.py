#Simpson's One Third Rule
import numpy as num

x=[1.4,1.6,1.8,2,2.2]
y=[4.0552,4.953,6.0436,7.3891,9.025]

yeven=[]
yodd=[]

h=x[1]-x[0]

sumeven=0
sumodd=0
for i in range(1,(len(y)-1)):
        if i%2!=0:
            yeven.append(y[i])
            sumodd+=y[i]
        else:
            yodd.append(y[i])
            sumeven+=y[i]


integrationydx=(h/3)*(y[0]+4*(sum(yeven))+2*(sum(yodd))+y[-1])
print(integrationydx)
