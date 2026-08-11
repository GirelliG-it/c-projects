# Replicate the C exercise; calculator-functions, in Python

# Function definitions (helper functions)
def _sum(first_number, second_number):
    return first_number + second_number

def _difference(first_number, second_number):
    return first_number - second_number

def _product(first_number, second_number):
    return first_number * second_number

def _quotient(first_number, second_number):
    return first_number // second_number

def _remainder(first_number, second_number):
    return first_number % second_number

def _decimal_quotient(first_number, second_number):
    return round(first_number / second_number, 2)

# Main execution block
def main():
    # Define variables
    first_number = 8
    second_number = 0

    # Call _sum and store result
    result_sum = _sum(first_number, second_number)
    print(f"{first_number} + {second_number} is equal to {result_sum}")

    # Call _difference and store result
    result_difference = _difference(first_number, second_number)
    print(f"{first_number} - {second_number} is equal to {result_difference}")

    # Call _product and store result
    result_product = _product(first_number, second_number)
    print(f"{first_number} * {second_number} is equal to {result_product}")

    if second_number != 0:
        # Call _quotient and store result
        result_quotient = _quotient(first_number, second_number)
        print(f"{first_number} // {second_number} is equal to {result_quotient}")

        # Call _remainder and store result
        result_remainder = _remainder(first_number, second_number)
        print(f"{first_number} % {second_number} is equal to {result_remainder}")

        # Call _decimal_quotient and store result
        result_decimal_quotient = _decimal_quotient(first_number, second_number)
        print(f"{first_number} / {second_number} is equal to {result_decimal_quotient}")
    else:
        print("Cannot divide by zero")


# 3. Entry point trigger
if __name__ == "__main__":
    main()
