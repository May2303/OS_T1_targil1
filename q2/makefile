CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LIBS = -lm

.PHONY: all clean

all: poisson

poisson: poisson.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

poisson.o: poisson.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) poisson.o poisson
