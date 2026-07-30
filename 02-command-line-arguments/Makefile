CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = arguments

all: $(TARGETS)

arguments: src/main.c
	$(CC) $(CFLAGS) src/main.c -o arguments

clean:
	rm -f $(TARGETS) src/main
