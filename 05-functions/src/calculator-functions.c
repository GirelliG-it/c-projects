#include <stdio.h>

int add_numbers(int first_number, int second_number)
{
	return first_number + second_number;
}

int subtract_numbers(int first_number, int second_number)
{
	return first_number - second_number;
}

int multiply_numbers(int first_number, int second_number)
{
	return first_number * second_number;
}

int quotient_calc(int first_number, int second_number)
{
	return first_number / second_number;
}

int remainder_calc(int first_number, int second_number)
{
	return first_number % second_number;
}

float decimal_quotient_calc(int first_number, int second_number)
{
	return (float) first_number / second_number;
}

int main(void)
{
	int first_number = 20;
	int second_number = 8;
	int sum = add_numbers(first_number, second_number);
	int difference = subtract_numbers(first_number, second_number);
	int product = multiply_numbers(first_number, second_number);

	printf("%d + %d = %d\n", first_number, second_number, sum);
	printf("%d - %d = %d\n", first_number, second_number, difference);
	printf("%d * %d = %d\n", first_number, second_number, product);

	// Division calculations go inside an if block to protect them from division by zero

	if (second_number != 0) {
		int quotient = quotient_calc(first_number, second_number);
		int remainder = remainder_calc(first_number, second_number);
		float decimal_quotient = decimal_quotient_calc(first_number, second_number);
		printf("%d / %d = %d\n", first_number, second_number, quotient);
		printf("%d %% %d = %d\n", first_number, second_number, remainder);
		printf("%d / %d = %.1f\n", first_number, second_number, decimal_quotient);

	} else {
		printf("Cannot divide by zero.\n");
	}
	return 0;
}
