CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = hello arguments calculator calculator_v2

all: $(TARGETS)

hello: src/main.c
	$(CC) $(CFLAGS) src/main.c -o hello

arguments: src/main_v2.c
	$(CC) $(CFLAGS) src/main_v2.c -o arguments

calculator: src/calculator.c
	$(CC) $(CFLAGS) src/calculator.c -o calculator

calculator_v2: src/calculator_v2.c
	$(CC) $(CFLAGS) src/calculator_v2.c -o calculator_v2

clean:
	rm -f $(TARGETS) src/main src/main_v2 src/calculator src/calculator_v2

.PHONY: all clean
