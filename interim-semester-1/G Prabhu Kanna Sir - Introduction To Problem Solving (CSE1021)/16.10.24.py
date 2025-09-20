z=0
def using_variable(x,y):
    z=y
    y=x
    x=z
    print("Values After Swapping X & Y Using Temporary Variable: ",x,y)

def without_using_variable(x,y):
    x=x+y
    y=x-y
    x=x-y
    print("Values After Swapping X & Y Without Using Temporary Variable: ",x,y)

def using_bitwise(x,y):
    x=x^y
    y=x^y
    x=x^y
    print("Values After Swapping X & Y Using Bitwise: ",x,y)

def swap(x,y):
    x,y=y,x
    print("Values After Swapping X & Y Using Swap:",x,y)

x=5
y=10
a=using_variable(x,y)
b=without_using_variable(x,y)
c=using_bitwise(x,y)
d=swap(x,y)
