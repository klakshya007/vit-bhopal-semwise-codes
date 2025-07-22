#Counting The Number Of Digits

a=int(input("Enter A Number: "))
digits=0
for i in str(a):
    digits+=1
print(digits)

digits=0
while a>0:
    a=a//10
    digits+=1
print(digits)

a=int(input())
print(len(str(a)))