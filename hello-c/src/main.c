#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello, CentOS!\n");
	printf("Argument count: %d\n", argc);
	printf("Program name: %s\n", argv[0]);
	
	if (argc >= 2) {
		printf("First supplied argument: %s\n", argv[1]);
	}

	return 0;
}
