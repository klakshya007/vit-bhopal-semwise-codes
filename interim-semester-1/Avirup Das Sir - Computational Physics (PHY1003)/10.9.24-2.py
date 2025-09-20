import numpy as num
import matplotlib.pyplot as plt

year=[2001,2002,2003,2004,2005]
producta = [150,125,100,50]
productb = [125,150,50,100]
 
plt.scatter(producta,productb,marker='o')
plt.xlabel(year)
plt.plot(producta, productb)
plt.grid
plt.show()


