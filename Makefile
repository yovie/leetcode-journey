CC = gcc
CFLAGS = -Wall -Wextra -g

all: two-sum

two-sum:
	$(CC) $(CFLAGS) easy/two-sum/two-sum.c -o easy/two-sum/result