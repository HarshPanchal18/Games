import random

print("Welcome to the dice roller...")

ch = 'y'
while(ch == 'y'):
    print("Dice is rolling.......")
    print(random.randint(1, 6))
    print("Do you want to continue? (y/n)")
    ch = input()
