#include <stdio.h>

int main(void)
{
	int first_number = 20;
	int second_number = 8;
	int sum = first_number + second_number;
	int difference = first_number - second_number;
	int product = first_number * second_number;

	printf("%d + %d = %d\n", first_number, second_number, sum);
	printf("%d - %d = %d\n", first_number, second_number, difference);
	printf("%d * %d = %d\n", first_number, second_number, product);

	return 0;
}
