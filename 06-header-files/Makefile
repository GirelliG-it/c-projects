CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGETS = calculator
OBJECTS = calculator-main.o calculator.o

all: $(TARGETS)

calculator-main.o: src/calculator-main.c src/calculator.h
	$(CC) $(CFLAGS) -c src/calculator-main.c -o calculator-main.o

calculator.o: src/calculator.c src/calculator.h
	$(CC) $(CFLAGS) -c src/calculator.c -o calculator.o

calculator: calculator-main.o calculator.o
	$(CC) calculator-main.o calculator.o -o calculator

clean:
	rm -f $(TARGETS) $(OBJECTS)

.PHONY: all clean
