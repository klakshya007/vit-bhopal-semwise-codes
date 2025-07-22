import numpy as num
import pandas as pd

h=num.linspace(-.10,.10,21)
g=10
k=100

potential_energy=.5*k*h**2

data=pd.DataFrame({
    "Positions(m)":h,
    "Potential Energy(J)":potential_energy

})

data.head(10)