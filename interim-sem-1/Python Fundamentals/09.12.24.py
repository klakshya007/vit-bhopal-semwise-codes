#Array Reverse
import numpy as num

A=num.array([1,234,124,14124,532])

n=len(A)
for i in range(-1,-n-1,-1):
    print(A[i])

B=num.array([[1,2,3],[5,6,7],[8,9,10],[11,12,13],[14,15,16]])
n=len(B)
m=len(B[1])
print(n,m,B)