import random
import time

# Function to print the welcome message
def print_welcome():
    print("Welcome to the Ultimate Quiz Application!")
    print("Test your knowledge and earn rewards as you progress through the levels!")
    print("Let's get started!\n")

# Function to get user details: name and age
def get_user_details():
    name = input("Please enter your name: ")
    age = input("Please enter your age: ")
    print(f"\nHello {name}, age {age}! Let's begin your journey through the quiz.")
    time.sleep(1)
    return name, age

# Function to ask a multiple-choice question and validate the answer
def ask_question(question, correct_answer, options):
    print(question)
    for i, option in enumerate(options, 1):
        print(f"{i}. {option}")
    
    try:
        user_answer = int(input("Your answer (1/2/3/4): "))
        if options[user_answer - 1] == correct_answer:
            return True
        else:
            return False
    except (ValueError, IndexError):
        print("Invalid input! Please select a number between 1 and 4.")
        return False

# Function to handle level transitions and increasing difficulty
def level_up(level, reward):
    print(f"\nCongratulations! You completed Level {level - 1}.")
    print(f"You earned {reward} INR as a reward.\n")
    time.sleep(2)
    print(f"Welcome to Level {level}!\n")
    return level, reward + 100  # Reward increases by 100 INR for each level

# Function to run the quiz
def run_quiz():
    print_welcome()
    name, age = get_user_details()
    
    # Initialize quiz variables
    level = 1
    reward = 100  # Initial reward for level 1
    total_levels = 10  # Total number of levels
    questions_per_level = 4  # Each level has 4 questions

    # Main game loop
    while level <= total_levels:
        print(f"\nStarting Level {level}...\n")
        
        # Each level consists of 4 questions
        for question_num in range(1, questions_per_level + 1):
            # Increasing difficulty with each level
            if level == 1:  # Easy questions
                num1 = random.randint(1, 10)
                num2 = random.randint(1, 10)
            elif level == 2:  # Slightly harder
                num1 = random.randint(1, 15)
                num2 = random.randint(1, 15)
            elif level == 3:  # Medium difficulty
                num1 = random.randint(1, 20)
                num2 = random.randint(1, 20)
            elif level == 4:  # Moderate difficulty
                num1 = random.randint(1, 25)
                num2 = random.randint(1, 25)
            elif level == 5:  # Medium-high difficulty
                num1 = random.randint(1, 30)
                num2 = random.randint(1, 30)
            elif level == 6:  # High difficulty
                num1 = random.randint(1, 40)
                num2 = random.randint(1, 40)
            elif level == 7:  # Very high difficulty
                num1 = random.randint(1, 50)
                num2 = random.randint(1, 50)
            elif level == 8:  # Expert level
                num1 = random.randint(1, 60)
                num2 = random.randint(1, 60)
            elif level == 9:  # Master level
                num1 = random.randint(1, 70)
                num2 = random.randint(1, 70)
            else:  # Legendary difficulty at level 10
                num1 = random.randint(1, 80)
                num2 = random.randint(1, 80)

            # Generate random answers
            correct_answer = num1 + num2  # Addition question
            options = [correct_answer, correct_answer + random.randint(1, 5), correct_answer - random.randint(1, 5), correct_answer + random.randint(6, 10)]
            random.shuffle(options)
            question = f"What is {num1} + {num2}?"
            
            # Ask the question and check if the answer is correct
            correct = ask_question(question, correct_answer, options)
            if not correct:
                print(f"\nOops! Incorrect answer! You were at Level {level} and earned {reward} INR as a reward.")
                return  # End the quiz on wrong answer
            else:
                print("Correct!\n")
            time.sleep(1)  # Pause between questions

        # After completing all questions in a level, congratulate the user and increase difficulty
        print(f"Congratulations! You've completed Level {level}.")
        level, reward = level_up(level + 1, reward)  # Update level and reward

    print(f"\nCongratulations {name}! You've completed the entire quiz!")
    print(f"Total reward earned: {reward} INR.")

# Start the quiz
run_quiz()
