#include <stdio.h>

int main(void)
{
	int number = 42;            // Create an integer initialized to 42
	int *ptr = &number;         // Create a pointer holding that numbers address
	*ptr = 99;                  // Store 99 in the integer that ptr points to
    printf("%p\n", (void *)&number);

	number = 7;                 // Change the same integer directluy to 7

	printf("%p\n", (void *)ptr);

    // Display the current value and addresses
	printf("Prints the stored integer: %d\n", number);
	printf("Prints the address of te integer in hex: %p\n", (void *)&number);
	printf("Prints the address held by the pointer: %p\n",(void *)ptr);
	printf("Prints the integer accessed by the pointer: %d\n", *ptr);

	return 0;
}
