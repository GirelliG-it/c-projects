#include <stdio.h>

int main(void) {

	int width = 6;
	int height = 4;

	int *ptr = &width;

	*ptr = width * 2;

	int area = width * height;

	printf("%d * %d = %d\n", width, height, area);

	return 0;
}
