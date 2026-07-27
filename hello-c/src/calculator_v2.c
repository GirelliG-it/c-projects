#include <stdio.h>

int main(void)
{
	int first_number = 20;
	int second_number = 8;
	int sum = first_number + second_number;
	int difference = first_number - second_number;
	int product = first_number * second_number;

// Division calculations go inside an if block to protect them from division by zero

	if (second_number != 0) {
		int quotient = first_number / second_number;
		int remainder = first_number % second_number;
		float decimal_quotient = (float) first_number / second_number;

		printf("%d / %d = %d\n", first_number, second_number, quotient);
		printf("%d %% %d = %d\n", first_number, second_number, remainder);
		printf("%d / %d = %.2f\n", first_number, second_number, decimal_quotient);
	} else {
		printf("Cannot divide by zero.\n");
	}

	printf("%d + %d = %d\n", first_number, second_number, sum);
	printf("%d - %d = %d\n", first_number, second_number, difference);
	printf("%d * %d = %d\n", first_number, second_number, product);

	return 0;

}
