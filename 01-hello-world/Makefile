CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = hello

all: $(TARGETS)

hello: src/main.c
	$(CC) $(CFLAGS) src/main.c -o hello

clean:
	rm -f $(TARGETS) src/main

.PHONY: all
