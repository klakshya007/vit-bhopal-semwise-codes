num=int(input("Enter A Number Whose Product Is To Be Printed: "))
num2=int(input("Enter The Number Of Multiplications: "))
for i in range(1,num2+1):
    print(f"{num} X {i} = {num*i}")


y=0
while True:
    x=int(input("Enter A Number: "))
    y+=x
    if x==5:
        break
    else:
        continue


print("The Sum Is: ",(y-5))