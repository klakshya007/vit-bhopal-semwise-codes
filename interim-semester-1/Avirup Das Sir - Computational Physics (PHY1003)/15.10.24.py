import matplotlib.pyplot as plt

given=[20,15,5,5,20,20,15,15,10,10,10,10,20,15,5,18,18,18,18,15]

given.sort()

print(given)

x=set(given)

marks=list(x)

print(marks)

y={}
for items in given:
    y[items]=given.count(items)


y_fre=y.values()

frequency=list(y_fre)

print(frequency)

plt.bar(marks,frequency)
plt.show()