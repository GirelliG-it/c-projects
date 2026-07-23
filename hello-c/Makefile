CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -g

TARGET = hello

$(TARGET): src/main.c
	$(CC) $(CFLAGS) src/main.c -o $(TARGET)

clean:
	rm -f $(TARGET)
