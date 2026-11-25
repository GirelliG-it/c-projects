#include <stdio.h>

int main(void) {
	
	int number = 99; // Creates an integer initialized at 99
	int other = 25;  // Creates a pointer holding that number's address
	
	ptr = &other;
	*ptr = 50;

	printf("Print the stored integer: %d\n", number);
	printf("&d\n", other);

	return 0;
}
