num=int(input("Enter A Number: "))

def prime_numbers(num):
    prime_list=[]
    is_prime=True
    for i in range(2,int(num/2)):
        for j in range(2,i):
            if i%j==0:
                is_prime=False
                break
        if is_prime:
            prime_list.append(i)

x=(prime_numbers(num))

def prime_factors(num):
    prime_divisors=[]
    for i in x:
        if num%i==0:
            prime_divisors.append(i)
        else:
            break

print(prime_factors(num))