#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello, CentOS!\n");
	printf("Argument count: %d\n", argc - 1);
	
	for (int i = 1; i < argc; i++) {
		printf("Argument %d: %s\n", i, argv[i]);
}
	return 0;
}
