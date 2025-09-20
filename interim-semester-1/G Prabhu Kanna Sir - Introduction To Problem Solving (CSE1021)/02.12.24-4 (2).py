#GCD using Repeated Divison

a=int(input("Enter The First Number: "))
b=int(input("Enter The Second Number: "))

diva=[]
divb=[]

for i in range(1,a+1):
    if a%i==0:
        diva.append(i)

for i in range(1,b+1):
    if b%i==0:
        divb.append(i)
    
cd=[]
for i in diva:
    for j in divb:
        if i==j:
            cd.append(i)

print(max(cd))

