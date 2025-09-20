import numpy as num

A=num.array([1+2*num.sqrt(7),1,2])
B=num.array([1,1.5,2])
C=num.array([1,3,2])

AB=B-A
AC=C-A

magnitudeAB=num.linalg.norm(AB)
magnitudeAC=num.linalg.norm(AC)


cos_theta= (num.dot(AB,AC))/(magnitudeAB*magnitudeAC)

angle=num.degrees(num.arccos(cos_theta))


print(angle,"In Degrees")

