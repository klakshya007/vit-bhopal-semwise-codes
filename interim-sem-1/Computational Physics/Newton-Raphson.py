#Newton-Raphson's Method
import numpy as num

def f(x):
    return num.cos(x)+1-3*x

def fdash(x):
    return -num.sin(x)-3

def newton(x):
    h=f(x)/fdash(x)
    while abs(h) >=.0001:
        h=f(x)/fdash(x)
        x=x-h
        print(x)
    print("Root: ", round(x,3))

x0=.5
newton(x0)
