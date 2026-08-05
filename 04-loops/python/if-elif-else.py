# Basic Python exercises along my C curriculum
# Every exercise done in C must be replicated in Python
#
# if-elif-else
#

i = 0

while i <= 9:
    i += 1
    if i < 5:
        print(f"{i} is smaller than 5")
    elif i == 5:
        print(f"{i} is equal to 5")
    else:
        print(f"{i} is bigger than 5")
