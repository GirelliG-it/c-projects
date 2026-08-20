#include <stdio.h>

int main(void)
{
	int scores[5] = {10, 20, 30, 40, 50};
	int total = 0;

	for (int i = 4; i >= 0; i--)
	{
		printf("%d\n", scores[i]);
		total = total + scores[i];
	}

	printf("Total: %d\n", total);

	return 0;
}
