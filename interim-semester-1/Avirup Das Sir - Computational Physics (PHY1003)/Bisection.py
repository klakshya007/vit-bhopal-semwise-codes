#Bisection Method

def f(x):
    return x**3-4*x-9

xl=2
xu=3
n=10
i=0
while i<=n:
    if f(xl)*f(xu)<0:
        xm=(xl+xu)/2
        print(f"{xl}   ,{xu}    ,{xm}    ")
        if f(xl)*f(xm)<0:
            xu=xm
        elif f(xu)*f(xm)<0:
            xl=xm
        else:
            break
    i=i+1
print("Root: ",xm)