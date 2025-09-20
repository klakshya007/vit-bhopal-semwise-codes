#Euler's Method

import numpy as num
import matplotlib.pyplot as plt

ll=float(input("Enter The Lower Limit Of X: "))
ul=float(input("Enter The Uper Limit Of X: "))
y=float(input("Enter The Initial Value Of Y: "))
n=float(input("Enter The Number Of Iterations: "))
delx=(ul-ll)/n
x=num.arange(ll,ul,delx)
temp=0
for i in x:
    dybydx=(y-x)/(y+x)
    num.clip(dybydx,1,1.1)
    print(f"X: {i}, Y: {y}, DY/DX: {dybydx}, New Y: {temp}")
    temp=y+temp
    y=y+delx*(dybydx)
    
