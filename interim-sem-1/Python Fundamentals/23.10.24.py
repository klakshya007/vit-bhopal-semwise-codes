#Design 

x="*"
n=5
j=0


for i in range(0,n):
    print(" "*(i),(x+" ")*(n-i))

for i in range(0,n+1):    
    print(" "*(n-i),(x+" ")*(i))