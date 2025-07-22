import array as ar

#Find Number
def find_number(arr, tofind):
    if tofind in arr:
        print(arr.index(tofind))
    else:
        print(-1)

a=ar.array('i', [5,10,15,20,25])

find_number(a,15)


#Adding & Removing Elements
b=ar.array('I',[1, 2, 3, 4])
b.append(5)
print(b)
b.insert(0,0)
print(b)
b.pop(3)
print(b)


#Array Slicing 
c=ar.array('b',[10, 20, 30, 40, 50, 60])
print(c[0:3:1])
print(c[-1:-3:-1])
print(c[0:len(c):2])