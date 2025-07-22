x=int(input("Enter Any Number: "))

for i in range(0,x):
    print((" "*i)+("*"+" ")*(x-i))
for i in range(0,x):
    print((" "*(x-i-1))+("*"+" ")*(i+1))


print("\n"*2)


for i in range(0,x):
    print((" "*i)+("*"+" ")*(x-i))

print("\n"*2)

i=2
print(" "*x+'*')
for i in range(1,x):
    print(" "*(x-i)+"*"+" "*i+" "*(i-1)+"*")
print("*"*((x*2)+1))



