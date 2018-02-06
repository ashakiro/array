CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES= array.cpp arraytest.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=array

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
