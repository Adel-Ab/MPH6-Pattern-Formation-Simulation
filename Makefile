.PHONY: clean build

CC = gcc
CFLAGS = -Wall -g
LIBS = -lglut -lGL -lGLU -lglut -lm

build:
	$(CC) $(CFLAGS) ./src/*.cc -o program.out $(LIBS)

clean:
	$(RM) $(TARGET)