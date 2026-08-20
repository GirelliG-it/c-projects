#include <stdio.h>

int main(void)
{
	int scores[] = {10, 20, 30, 40, 50};
	size_t count = sizeof scores / sizeof scores[0];
	printf("Array total: %zu * %zu = %zu bytes\n", count, sizeof scores[0], sizeof scores);
	int total = 0;

	for (size_t i = count; i > 0; i--)
	{
		size_t index = i - 1;
		printf("Index %zu: %d\n", index, scores[index]);
		total = total + scores[index];
	}

	printf("Total: %d\n", total);

	return 0;
}
