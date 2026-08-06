CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = for-loop while-loop if-elif-else loop-break loop-continue loop-return

all: $(TARGETS)

for-loop: src/for-loop.c
	$(CC) $(CFLAGS) src/for-loop.c -o for-loop

while-loop: src/while-loop.c
	$(CC) $(CFLAGS) src/while-loop.c -o while-loop

if-elif-else: src/if-elif-else.c
	$(CC) $(CFLAGS) src/if-elif-else.c -o if-elif-else

loop-break: src/loop-break.c
	$(CC) $(CFLAGS) src/loop-break.c -o loop-break

loop-continue: src/loop-continue.c
	$(CC) $(CFLAGS) src/loop-continue.c -o loop-continue

loop-return: src/loop-return.c
	$(CC) $(CFLAGS) src/loop-return.c -o loop-return

clean:
	rm -f $(TARGETS)

.PHONY: all clean
