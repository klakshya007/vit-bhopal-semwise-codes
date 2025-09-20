# #The Given Equation Is:
# x+3y+3z=0
# x-y+z=0
# 2x+y+3z=0

import numpy as num

A=num.array([[1,3,3],[1,-1,1],[2,1,3]])

B=num.array([[0],[0],[0]])

Ainv=num.linalg.inv(A)

X=num.dot(Ainv,B)

print(X)


