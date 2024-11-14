CC=g++
CFLAGS= -Wall -g -O2
LIBS= -lmingw32 -lsfml-graphics -lsfml-window -lsfml-system

SOURCES=$(wildcard src/*.cpp src/**/*.cpp)
OBJECTS=$(patsubst %.cpp,%.o, $(SOURCES))

TARGET=main

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LIBS)

clean:
	del /q $(TARGET).exe
	del /q src\*.o