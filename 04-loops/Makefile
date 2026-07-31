CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = for-loop

all: $(TARGETS)

for-loop: src/for-loop.c
	$(CC) $(CFLAGS) src/for-loop.c -o for-loop

clean:
	rm -f $(TARGETS)

.PHONY: all clean
