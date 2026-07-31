#include <stdio.h>

int main(void)
{
	// This simple for-loop program takes the variables 5 and 1, iterates over the numbers 1 through 10 and
	// multiplies times 5 at each step
	int number = 5;
	for (int i = 1; i <= 10; i++) {
		printf("%d * %d = %d\n", number, i, number * i);
	}

	return 0;
}
