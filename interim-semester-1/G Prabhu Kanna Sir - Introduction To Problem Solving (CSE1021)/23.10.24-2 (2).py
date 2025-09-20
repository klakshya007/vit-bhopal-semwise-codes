#Design 

x="*"
n=5
j=0

print((x+"   ")*(n+1),x)

for i in range(0,n):
    print("  "*(i),(x)+("  "*((n-i)*2))+x)

print("  "*(n),x)

for i in range(0,n+1):    
    print(" "*(n-i),(x+" ")*(i))