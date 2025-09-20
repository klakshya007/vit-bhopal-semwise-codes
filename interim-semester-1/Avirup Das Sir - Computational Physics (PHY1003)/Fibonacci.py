import numpy as num

mylist=[0,1]
num=int(input("Enter Any Number: "))
i=1
while i<num+1:
    x=mylist[-1]+mylist[-2]
    mylist.append(x)
    i=i+1
print(mylist)