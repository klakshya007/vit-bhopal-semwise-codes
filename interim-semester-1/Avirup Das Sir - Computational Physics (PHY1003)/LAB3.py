
import numpy as num
import matplotlib.pyplot as plt


#Q1-A
A=2
omega=(5)**(.5)
t=num.linspace(0,10,10000)
theta=[0,1,2]
theta=num.radians(theta)


plt.figure(figsize=(10,6))
for i in theta:
    Y= A *num.sin(omega*t + i)
    plt.subplot(3,1,1)
    plt.plot(t,Y)
    plt.xlabel('Time')
    plt.ylabel('Amplitude')
    plt.grid(True)


#Q1-B
for i in theta:
    Y= A *num.cos(omega*t + i)*omega
    plt.subplot(3,1,2)
    plt.plot(t,Y)
    plt.xlabel("Time")
    plt.ylabel("Velocity")
    plt.grid(True)


for i in theta:
    Y= -A *num.sin(omega*t + i)*omega**2
    plt.subplot(3,1,3)
    plt.plot(t,Y)
    plt.xlabel("Time")
    plt.ylabel("Acceleration")
    plt.grid(True)




#Q2
a=num.linspace(0.1,1,5)
n=[1,2,3]


plt.figure(figsize=(10,6))
for i in a:
    x=num.linspace(0,i,1000)
    for j in n:
        Y = num.sqrt(2 / i) * num.sin(j*num.pi * x / i)
        plt.plot(x, Y)
        plt.grid(True)
        plt.xlabel('X')
        plt.ylabel('Y')


plt.show()