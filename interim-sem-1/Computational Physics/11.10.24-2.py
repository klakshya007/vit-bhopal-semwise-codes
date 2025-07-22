#Printing The FIbonacci Series

import matplotlib.pyplot as plt

def fibonacci(n):
    fib_series = [0, 1]  
    for i in range(2, n):
        next_term = fib_series[i-1] + fib_series[i-2]
        fib_series.append(next_term)
    return fib_series

n_terms = 10

fib_sequence = fibonacci(n_terms)
print("Fibonacci series up to 10 terms:")
print(fib_sequence)

x=fib_sequence
n=len(fib_sequence)

def generate_numbers(n):
    numbers = []  
    for i in range(1, n + 1):
        numbers.append(i)
    return numbers

numbers_array = generate_numbers(n)
print("Numbers from 1 to", n, "are:")
print(numbers_array)
y=numbers_array

plt.plot(x,y,color='black')
plt.show()

