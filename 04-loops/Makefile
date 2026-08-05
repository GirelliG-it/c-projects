CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = for-loop while-loop if-elif-else

all: $(TARGETS)

for-loop: src/for-loop.c
	$(CC) $(CFLAGS) src/for-loop.c -o for-loop

while-loop: src/while-loop.c
	$(CC) $(CFLAGS) src/while-loop.c -o while-loop

if-elif-else: src/if-elif-else.c
	$(CC) $(CFLAGS) src/if-elif-else.c -o if-elif-else

clean:
	rm -f $(TARGETS)

.PHONY: all clean
