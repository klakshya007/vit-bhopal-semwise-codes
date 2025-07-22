def getsum(x):
    sum=0
    for digit in str(x):
        sum+= int(digit)
    return sum
x=10000044432
print(getsum(x))