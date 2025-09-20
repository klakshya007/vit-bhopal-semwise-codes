#bisection method

def f(m):
    return m**3-.165*m**2+3.993*10**(-4)

def bisection(a,b,n):
    i=1
    condition = True
    
    while condition:
        x=(a+b)/2
        error=(x-a)/a*100
        if f(x)<0:
            a=x
        else:
            b=x
        if i==n:
            condition = False
        else:
            print("Error Percentage: ", error)
            condition = True
            i+=1
    print("Root: ",x)
    



a=float(input("Enter First Approximation Root:"))
b=float(input("Enter Second Approximation Root:"))
n=int(input("Enter The Total No. Of Iterations:"))

if f(a)*f(b)>0:
    print("Value Error")
else:
    bisection(a,b,n)
