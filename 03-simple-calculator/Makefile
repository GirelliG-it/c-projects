CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = basic_calculator calculator_zero_safe

all: $(TARGETS)

basic_calculator: src/basic_calculator.c
	$(CC) $(CFLAGS) src/basic_calculator.c -o basic_calculator

calculator_zero_safe: src/calculator_zero_safe.c
	$(CC) $(CFLAGS) src/calculator_zero_safe.c -o calculator_zero_safe

clean:
	rm -f $(TARGETS)

.PHONY: all clean
