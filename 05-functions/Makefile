CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = function-add function-double function-return-reuse function-void function-void-parameter calculator-functions

all: $(TARGETS)

function-add: src/function-add.c
	$(CC) $(CFLAGS) src/function-add.c -o function-add

function-double: src/function-double.c
	$(CC) $(CFLAGS) src/function-double.c -o function-double

function-return-reuse: src/function-return-reuse.c
	$(CC) $(CFLAGS) src/function-return-reuse.c -o function-return-reuse

function-void: src/function-void.c
	$(CC) $(CFLAGS) src/function-void.c -o function-void

function-void-parameter: src/function-void-parameter.c
	$(CC) $(CFLAGS) src/function-void-parameter.c -o function-void-parameter

calculator-functions: src/calculator-functions.c
	$(CC) $(CFLAGS) src/calculator-functions.c -o calculator-functions

clean:
	rm -f $(TARGETS)

.PHONY: all clean
