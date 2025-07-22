#SET Operations

A=[1,2,3,4,5,4,9]
B=[3,2,2,5,1,4,7]
Aunq=list(set(A))
Bunq=list(set((B)))
lenA=len(Aunq)
lenB=len(Bunq)

#Union
uni=set(Aunq+Bunq)
print(uni)

#Intersection
inter=[]
for i in range(0,lenA):
    for j in range(0,lenB):
        if A[i]==B[j]:
            inter.append(A[i])
intersection=list(set(inter))
print(intersection)


#Difference
print(Aunq-intersection)
