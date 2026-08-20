#include <stdio.h>

int main(void)
{
	int temp[] = {12, 15, 18, 21, 24, 27, 30};
	size_t count = sizeof temp / sizeof temp[0];
	printf("Total array size: %zu\n", sizeof temp);
	printf("One element size: %zu\n", sizeof temp[0]);
	printf("Element count: %zu\n", count);

	for (size_t i = 0; i < count; i++)
	{
		printf("%d\n", temp[i]);
	}

	return 0;
}
