#include <stdio.h>

int triple_number(int number)
{
	return number * 3;
}

int main(void)
{
	int result = triple_number(5);
	printf("%d\n", result);
	printf("%d\n", result + 1);

	return 0;
}
