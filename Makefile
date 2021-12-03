# compiler options 
CC=gcc
CFLAGS=-Wall

# source and output files
SOURCES=./src/*.c
OUTPUT=test

all:
	$(CC) $(CFLAGS) $(SOURCES) -o $(OUTPUT)
	