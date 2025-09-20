import numpy as num

A=num.array([2,-3,6])
B=num.array([1,0,2])

magnitude=num.linalg.norm(B)

dotproduct=num.dot(A,B)

projection=dotproduct/magnitude

print(projection,"Is The Scalar Projection Of A on B")

