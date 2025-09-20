#Computing Nth Fibonacci Numbers

def fib(n):
    if n==0:
        return []
    if n==1:
        return[0]
    if n==2:
        return [0,1]
    if n>2:
        fib_seq=[0,1]
        for i in range(2,n):
            y=fib_seq[-1]+fib_seq[-2]
            fib_seq.append(y)
        print(fib_seq)

(fib(int(input("Enter Any Number: "))))