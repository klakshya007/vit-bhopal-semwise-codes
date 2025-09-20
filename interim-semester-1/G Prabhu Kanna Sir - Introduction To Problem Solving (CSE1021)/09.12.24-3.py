import array as ar

#Sum
def summation(arr):
    print(sum(arr))

a=ar.array('i',[2,4, 6, 8, 10])
summation(a)

#Sorting
a=ar.array('i',[10, 2, 8, 6, 4])
print("Ascending",sorted(a))
print("Descending",sorted((a),reverse=True))

#Rotation
b=ar.array('I',[1, 2, 3, 4, 5])
c=b[-1:-3:-1]
b=b[0:3:1]
print(c+b)