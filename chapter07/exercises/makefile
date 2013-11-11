CC=gcc
CFLAGS=-c -Wall -pedantic -ansi -std=c99
LDFLAGS=
SOURCES=main.c
OBJECTS=$(SOURCES:.c=.o)

EXECUTABLE=main.out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@
	

PREPROCESSED=$(SOURCES:.c=.i)
preprocess:
	$(CC) $(CFLAGS) $(SOURCES) -E -o $(PREPROCESSED)

clean:
	rm -f $(OBJECTS) $(PREPROCESSED) $(EXECUTABLE)
