CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = hello arguments

all: $(TARGETS)

hello: src/main.c
	$(CC) $(CFLAGS) src/main.c -o hello

arguments: src/main_v2.c
	$(CC) $(CFLAGS) src/main_v2.c -o arguments

clean:
	rm -f $(TARGETS) src/main src/main_v2

.PHONY: all clean
