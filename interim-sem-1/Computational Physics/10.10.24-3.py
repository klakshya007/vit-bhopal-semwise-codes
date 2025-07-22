import numpy as num
A=num.array([[1,1,-1],[3,-2,1],[1,3,-2]])
B=num.array([[6],[-5],[14]])
Ainverse=num.linalg.inv(A)
x=num.dot(Ainverse,B)
print(x)