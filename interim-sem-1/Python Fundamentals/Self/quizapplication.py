import random
print("Level 1")
i=random.randint(1,6)
if i == 1:
    print("What does \"CPU\" stand for?\n 1.Central Process Unit\n 2.Central Processing Unit\n 3.Computer Processing Unit\n 4.Control Processing Unit")
    answer = int(input("Enter your answer (1-4): "))
    if answer == 2:
        print("Correct")
    else:
        print("Sorry, it's the wrong answer")

if i == 2:
    print("Which of the following is an output device?\n 1.Keyboard\n 2.Monitor\n 3.Mouse\n 4.Scanner")
    answer = int(input("Enter your answer (1-4): "))
    if answer == 2:
        print("Correct")
    else:
        print("Sorry, it's the wrong answer")

if i == 3:
    print("What is the full form of \"RAM\"?\n 1.Random Access Memory\n 2.Read Access Memory\n 3.Read And Memorize\n 4.Random Allocated Memory")
    answer = int(input("Enter your answer (1-4): "))
    if answer == 1:
        print("Correct")
    else:
        print("Sorry, it's the wrong answer")

if i == 4:
    print("Which key is used to delete text to the left of the cursor?\n 1.Enter\n 2.Backspace\n 3.Shift\n 4.Ctrl")
    answer = int(input("Enter your answer (1-4): "))
    if answer == 2:
        print("Correct")
    else:
        print("Sorry, it's the wrong answer")

if i == 5:
    print("What is the primary purpose of a computer's operating system?\n 1.To create documents\n 2.To manage hardware and software\n 3.To play games\n 4.To connect to the internet")
    answer = int(input("Enter your answer (1-4): "))
    if answer == 2:
        print("Correct")
    else:
        print("Sorry, it's the wrong answer")

if "Corre":
    print("Very Nice You Move On To The Next Level, Level 2")
else:
    print("Sorry You Lost")

