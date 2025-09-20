import matplotlib.pyplot as plt

cars=["Audi","BMW","Ford","Tesla","Jaguar","Mercedes"]

data=[20,30,10,30,5,5]

plt.figure(figsize=(100,6))
plt.pie(data,labels=cars)

plt.show()
