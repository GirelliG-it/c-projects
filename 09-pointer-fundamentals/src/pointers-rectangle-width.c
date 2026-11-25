#include <stdio.h>

int main(void) {
	
	int width = 6;

	int *ptr = &width;

	*ptr = width * 2;

	printf("%d\n", *ptr);
	printf("%d\n", width);
	
	return 0;
}
