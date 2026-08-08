#include <stdio.h>

int add(int first, int second)
{
	return first + second;
}

int main(void)
{
	int result = add(20, 7);
	printf("%d\n", result);

	return 0;
}
