
CC = gcc
CFLAGS = -Iinclude -Iunity -Wall -Wextra
SRC = deti.c
UNITY_SRC = unity/unity.c
TESTS = test_deti.c
OUT = test_deti_run

all: test

test:
	$(CC) $(CFLAGS) $(SRC) $(UNITY_SRC) $(TESTS) -o $(OUT)
	./$(OUT)

clean:
	rm -f $(OUT)
