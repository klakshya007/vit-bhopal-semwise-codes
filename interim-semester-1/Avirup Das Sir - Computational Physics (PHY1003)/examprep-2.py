import numpy as num
import matplotlib.pyplot as plt

t=num.array([0,1,2,3,4,5,6])
N=num.array([32,47,65,92,132,190,275])


sum_t=num.sum(t)
sum_log_N=num.sum(num.log(N))
n=len(t)
sum_logNt=num.sum(num.log(N)*t)
sum_t2=num.sum(t**2)

log_b=(sum_t*sum_log_N-n*sum_logNt)/((sum_t)**2-n*sum_t2)

b=num.exp(log_b)
print(b)

log_a=(sum_log_N-sum_t*log_b)/n

a=num.exp(log_a)
print(a)

def f(t):
    return a*(b**t)

print(f(7))

t_data=num.linspace(0,7,100)
N_fitted=f(t_data)
plt.scatter(t,N,color='black')
plt.plot(t_data,N_fitted,color='green')
plt.show()