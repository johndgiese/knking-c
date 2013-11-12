SHELL = /bin/sh
.SUFFIXES:
.SUFFIXES: .c .o

CC=gcc
CFLAGS=-c -Wall -pedantic -ansi -std=c99
LDFLAGS=

SOURCES=main.c
PREPROCESSED=$(SOURCES:.c=.i)
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=exp


all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@
	

preprocess: $(PREPROCESSED)

%.i: %.c
	$(CC) $(CFLAGS) $< -E -o $@


.PHONY: clean
clean:
	rm -f $(OBJECTS) $(PREPROCESSED) $(EXECUTABLE)

