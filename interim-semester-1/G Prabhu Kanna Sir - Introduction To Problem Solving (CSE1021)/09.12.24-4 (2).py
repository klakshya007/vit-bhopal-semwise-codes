import array as ar

#Finding Duplicates
def find_duplicates(arr):
    duplicates = []
    seen = set()
    for num in arr:
        if num in seen:
            if num not in duplicates:
                duplicates.append(num)
        else:
            seen.add(num)
    return duplicates

a=ar.array('i',[1, 3, 4, 2, 5, 3, 4])
print(find_duplicates(a))

#Largest Product Of Two Elements
def largest_product(arr):
    sorted(a)
    product=[]
    for i in range(0,(len(arr)-1)):
        product.append(arr[i] * arr[i+1])
    print(max(product))

b=ar.array('i',[3, 5, -2, 8, 10])
largest_product(b)

#Merging Arrays
m=ar.array('B',[1, 3, 5])
n=ar.array('B',[2, 4, 6])
e=m+n
print(sorted(e))