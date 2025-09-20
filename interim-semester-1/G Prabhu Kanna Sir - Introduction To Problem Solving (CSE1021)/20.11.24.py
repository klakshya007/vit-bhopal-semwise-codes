num=int(input("Enter A Number: "))

def prime(num):
        prime_list=[]
        for i in range(2, int(num/2)):
            for j in range(2,i):
                if (i%j==0):
                    break
            else:
                prime_list.append(i)
        return prime_list

l=prime(num)

prime_factors=[]
for x in l:
    if num%x==0:
        prime_factors.append(x)

print("Prime Factors For The Given Number Are: ",prime_factors)

# ans=1
# for i in prime_factors:
#     count=0
#     while num%i==0:
#         count+=1
#         num=num//i
#     for j in range(count//2):
#         ans=ans*i
# print("root= ",ans)
