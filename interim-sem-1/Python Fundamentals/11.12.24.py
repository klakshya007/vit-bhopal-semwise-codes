#Banking System

total_money=200000
hundred_notes=200
two_hundred_notes=200
five_hundred_notes=280
n=0
rem=200000
while True:
    m=int(input("Login\n1. Manager \n2. Customer \n3. Exit\nYour Answer: "))
    if m==1:
        x=int(input(f"Welcome Mr.Manager \nWhat Would You Like To See: \n1. Money Remaining In The ATM\n2. Initial Amount\n3. Money Remaining In Different Denominations\n4. No. Of Customers\nYour Answer:"))
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
            if withdraw>200000:
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
                withdrawnot500=withdraw%1000
                if withdrawnot500%200==0:
                    a+=withdrawnot500/200
                    two_hundred_notes=two_hundred_notes-a
                    n+=1
                else :
                    b+=withdrawnot500/100
                    hundred_notes=hundred_notes-b
                withdraw500=withdraw-withdrawnot500
                c+=withdraw500/500
                five_hundred_notes=five_hundred_notes-c
                break
            else:
                print(f"We Are Being Rate Limited At The Moment, \nThe Maximum Amount Of Money Which Can Withdrawn Is {rem/(10-n)}")
                break
        else:
            print("Thank You For Using SBI ATM \nHave A Wonderful Day! \nKeep Your Hands Away From The Withdrawing Gate, The Entered Amount Will Be Available For Pick Up In A Few Moments!!")
            n+=12
        print(f"The Denominations Of Notes Are: 100 = {b}, 200 = {a}, 500 = {c}")
        
    elif m==3:
        print("Thank You For Choosing SBI, We Wish To See You Again :)")
        break

    
        

