CC = gcc
CFLAGS = -Wall -Wextra -g

all: two-sum palindrome

two-sum:
	$(CC) $(CFLAGS) easy/two-sum/two-sum.c -o easy/two-sum/result

palindrome:
	$(CC) $(CFLAGS) easy/palindrome-number/palindrome-number.c -o easy/palindrome-number/result

clean:
	rm -f easy/two-sum/result
	rm -f easy/palindrome-number/result