CC      := clang
CFLAGS 	:= -Wall -Werror -Wextra -std=c11 -g -I../../includes
SRC     := $(wildcard src/*.c) ../../src/safe_input.c
OBJ     := $(SRC:.c=.o)
TARGET  := main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)

.PHONY: all clean
