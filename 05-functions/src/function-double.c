#include <stdio.h>

int double_number(int number)
{
	return number * 2;
}

int main(void)
{
	int result = double_number(6);
	printf("%d\n", result);

	return 0;
}
