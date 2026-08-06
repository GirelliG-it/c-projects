# for loop with return
# in contrary to C, in Python return may only be used
# inside a function created with def (or async def)
# Using it a the top level causes:
# SyntaxError: 'return' outside function

def print_numbers():
    for i in range(1, 11):
        print(i)
        if i == 6:
            return

    print("This loop has terminated")

print_numbers()
