import numpy as num

def scalar_field(x,y,z):
     scalar_field=3*x^2*z-2*x*y^3+5*z
     return scalar_field

points=[
     (0,0,0,),
     (1,-2,2),
     (-1,-2,-3)
]

results = {data:scalar_field(*data) for data in points}

print(results)

for data,answers in results.items:
     print(f"Ph{data} = {answers}")