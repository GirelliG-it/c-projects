#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 10; i++) {
		if (i == 6) {
			return 0;
		}

		printf("%d\n", i);
	}
	printf("Loop finished\n");

	return 0;
}
