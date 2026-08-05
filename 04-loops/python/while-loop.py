# Basic Python exercises along my C curriculum
# Every exercise done in C must be replicated in Python
#
# while-loop
#
# In a while loop, you use a boolean condition (like i <= 10) instead of in range()
# The loop continues running as long as that condition stays True.
#
# in range(...): This belongs in a for loop. A while loop expects a condition that evaluates to True or False.
# i = +: To increment a variable in Python, the plus sign comes first: i += 1.
# break: Placing break inside the loop causes it to exit immediately on the first pass, so it would only print 1 once.


i = 1

while i <= 10:
    print(i)
    i += 1
