# Python equivalent of the C function 'void print_double(int number)'
# - 14 is printed inside print_double().
# - The function implicitly returns None.
# - result stores that None.
# - print(result) displays None.

def print_double(n):
    print(n * 2)

result = print_double(7)
print(result)
