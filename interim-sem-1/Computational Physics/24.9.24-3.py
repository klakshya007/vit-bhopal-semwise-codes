import numpy as num

def scalarfield(x,y,z):
    return  3*x**2*z-2*x*y**3+5*z

points=[
    (0,0,0,),
    (1,-2,2),
    (-1,-2,-3)
]

results = {data: scalarfield(*data) for data in points}

for data,answer in results.items():
    print(f"∅{data} = {answer}")