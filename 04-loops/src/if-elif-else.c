#include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 10) {
		if (i < 5) {
			printf("%d is less than 5\n", i);
		} else if (i == 5) {
			printf("%d is equal to 5\n", i);
		} else {
			printf("%d is greater than 5\n", i);
		}

		i++;
	}

	return 0;
}
