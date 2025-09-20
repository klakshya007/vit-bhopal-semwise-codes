#Banking System

def withdrawrem(withdraw):
    withdrawnot500=(withdraw)%1000
    a=0
    b=0
    c=0
    if withdrawnot500%200==0:
        a+=withdrawnot500/200
        two_hundred_notes=two_hundred_notes-a
    else :
        b+=withdrawnot500/100
        hundred_notes=hundred_notes-b
    withdraw500=withdraw-withdrawnot500
    c+=withdraw500/500
    five_hundred_notes=five_hundred_notes-c
    
#Defining The Amounts Of Total Money, Hundred, Two Hundred, Five Hundred Ruppee Notes

total_money=200000
hundred_notes=total_money/1000
two_hundred_notes=total_money/1000
five_hundred_notes=total_money/50000*70

while True:
    m=int(input("Login\n1. Manager \n2. Customer \n3. Exit\nYour Answer: "))
    if m==1:
        x=int(input(f"Welcome Mr.Manager \nWhat Would You Like To Check At This Moment: \n1. Money Remaining In The ATM\n2. Initial Amount\n3. Money Remaining In Different Denominations\n4. No. Of Customers\nYour Answer:"))
        if x==1:
            print(f"The Money Remaining In The ATM At This Moment Is : {rem}")
        elif x==2:
            print(f"The Money From Which We Started Today Is: {total_money}")
        elif x==3:
            print(f"The No. Of One Hundred Ruppee Notes Remaining Are: {hundred_notes}")
            print(f"The No. Of Two Hundred Ruppee Notes Remaining Are: {two_hundred_notes}")
            print(f"The No. Of Five Hundred Ruppee Notes Remaining Are: {five_hundred_notes}")
        elif x==4:
            print(f"Number Of Customers = {n}")
        print("Thank You, Have A Wonderful Day :)")

    elif m==2:
        bank=int(input("Welcome To SBI ATM :) \nEnter From (1-4) Which Bank Do You Belong To: \n1. SBI \n2. ICICI \n3. HDFC \n4. CANARA \nYour Answer : "))

        if bank==1:
            print("Welcome To SBI, Money Withdrawal Service!!")
            withdraw=int(input("Enter The Amount You Would Like To Withdraw: "))
            if withdraw>total_money:
                print("The Server Is Unreachable At The Moment\n       !!Please Try Again Later!!")
                break
            elif (withdraw%100 or withdraw%10)!=0:
                print("The Server Is Unreachable At The Moment\n       !!Please Try Again Later!!")
                break
        else:
            print("The Server Is Unreachable At The Moment\n       !!Please Try Again Later!!")
        
        a=0
        b=0
        c=0
        while n<11:
            if withdraw<=(rem/(10-n)):
                print("Thank You For Using SBI ATM \nHave A Wonderful Day! \nKeep Your Hands Away From The Withdrawing Gate, The Entered Amount Will Be Available For Pick Up In A Few Moments!!") 
                rem=total_money-withdraw
                if withdraw==100:
                    b=1
                    n=n+1
                elif withdraw==200:
                    b=2
                    n=n+1
                elif withdraw==300:
                    a=1
                    b=1
                    n=n+1
                elif withdraw==400:
                    a=1
                    b=2
                    n=n+1
                elif withdraw==500:
                    a=1
                    b=3
                    n=n+1
                elif withdraw==600:
                    a=2
                    b=2
                    n=n+1
                elif withdraw==700:
                    a=2
                    c=1
                    n=n+1
                elif withdraw==800:
                    a=1
                    b=1
                    c=1
                    n=n+1
                elif withdraw==900:
                    a=2
                    b=1
                    c=1
                    n=n+1
                elif withdraw==1000:
                    a=3
                    b=1
                    c=1
                    n=n+1
                elif withdraw>1000 and withdraw<=2000:
                    a=2
                    b=3
                    withdraw=withdraw-700
                    withdrawrem(withdraw)
                elif withdraw>2000 and withdraw<=5000:
                    b=4
                    a=3
                    withdrawnot500=(withdraw-1000)%1000
                    if withdrawnot500%200==0:
                        a+=withdrawnot500/200
                        two_hundred_notes=two_hundred_notes-a
                    else :
                        b+=withdrawnot500/100
                        hundred_notes=hundred_notes-b
                    withdraw500=withdraw-withdrawnot500-1000
                    c+=withdraw500/500
                    five_hundred_notes=five_hundred_notes-c
                    n+=1
                elif withdraw>5000 and withdraw<=10000:
                    b=5
                    a=5
                    withdrawnot500=(withdraw-1500)%1000
                    if withdrawnot500%200==0:
                        a+=withdrawnot500/200
                        two_hundred_notes=two_hundred_notes-a
                    else :
                        b+=withdrawnot500/100
                        hundred_notes=hundred_notes-b
                    withdraw500=withdraw-withdrawnot500-1500
                    c+=withdraw500/500
                    five_hundred_notes=five_hundred_notes-c
                    n+=1
                elif withdraw>10000 and withdraw<=15000:
                    b=10
                    a=5
                    withdrawnot500=(withdraw-2000)%1000
                    if withdrawnot500%200==0:
                        a+=withdrawnot500/200
                        two_hundred_notes=two_hundred_notes-a
                    else :
                        b+=withdrawnot500/100
                        hundred_notes=hundred_notes-b
                    withdraw500=withdraw-withdrawnot500-2000
                    c+=withdraw500/500
                    five_hundred_notes=five_hundred_notes-c
                    n+=1
                elif withdraw>15000:
                    b=10
                    a=10
                    withdrawnot500=(withdraw-3000)%1000
                    if withdrawnot500%200==0:
                        a+=withdrawnot500/200
                        two_hundred_notes=two_hundred_notes-a
                    else :
                        b+=withdrawnot500/100
                        hundred_notes=hundred_notes-b
                    withdraw500=withdraw-withdrawnot500-3000
                    c+=withdraw500/500
                    five_hundred_notes=five_hundred_notes-c
                    n+=1
                break
            else:
                print(f"We Are Being Rate Limited At The Moment, \nThe Maximum Amount Of Money Which Can Withdrawn Is {rem/(10-n)}")
                break
        else:
            print("Thank You For Using SBI ATM \nHave A Wonderful Day! \nKeep Your Hands Away From The Withdrawing Gate, The Entered Amount Will Be Available For Pick Up In A Few Moments!!")
            n+=1

        print(f"The Denominations Of Notes Are: 100 = {b}, 200 = {a}, 500 = {c}")
        
    elif m==3:
        print("Thank You For Choosing SBI, We Wish To See You Again :)")
        break

    
        

