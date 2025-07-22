# # #The Given Equation Is:
# x+3y-2z=5
# 2x+y+4z=8
# 6x+y-3z=5

import numpy as num

A=num.array([[1,3,-2],[2,1,4],[6,1,-3]])

B=num.array([[5],[8],[5]])

Ainv=num.linalg.inv(A)

Adet=num.linalg.det(A)
print(Adet)

X=num.dot(Ainv,B)

print(X)
