import numpy as num

A=num.array([12,4,-5])
B=num.array([1,0,3])

resultant=A+B

magnitude=num.linalg.norm(resultant)

unit_vector=resultant/magnitude

print(unit_vector)
