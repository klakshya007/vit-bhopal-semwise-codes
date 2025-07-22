#Smallest Divisor

x=int(input("Enter Any Number: "))

n=[]
for i in range(2, x+1):
    if (x%i==0):
        n.append(i)

print(min(n))