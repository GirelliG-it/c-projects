#include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 10) {
		if (i == 6) {
			break;
		}

		printf("%d\n", i);
		i++;
	}

	printf("Loop finished\n");

	return 0;
}
