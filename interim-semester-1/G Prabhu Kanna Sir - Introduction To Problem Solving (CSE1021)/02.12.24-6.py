#Pseudo Random Number For Generating OTP

from datetime import datetime

x=int(input("Enter Any Number Between 0 To 52: "))

b=[]
for i in range(0,10001):
    b.append(i)

alpha=("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z a b c d e f g h i j k l m n o p q r s t u v w x y z")
a=alpha.split( )

current_time = datetime.now().strftime("%H:%M:%S")
time=(current_time.split(":"))

seed=a[x]+str(b[x**2])+time[1]+a[9]+time[2]+str(int(x**.5))

print(seed)