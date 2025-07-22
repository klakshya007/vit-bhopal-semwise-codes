#Plot Of Energies VS Height
import numpy as num
import matplotlib.pyplot as plt

H=int(input("Enter The Height: "))

HPE=num.arange(1,H+1)
HKE=num.arange(H,0,-1)
print(HPE)
g=10

m=int(input("Enter The Mass: "))
KE=1/2*m*(2*HKE*g)
PE=m*g*HPE

plt.plot(HPE,PE,color='red')
plt.plot(HPE,KE,color='green')
plt.xlabel("Height")
plt.ylabel("Energies")
plt.legend()
plt.show()
