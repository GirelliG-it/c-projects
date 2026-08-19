#include <stdio.h>

int main(void)
{
	int scores[4] = {10, 20, 30, 40};
	
	scores[2] = 99;
	
	int total = 0;
	
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", scores[i]);
		total = total + scores[i];
	}
	
	printf("Total: %d\n", total);
	
	return 0;
}
