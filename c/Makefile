SOURCES = ./DataSequence/CreateSequence.c ./DataSequence/DataSequence.c ./RandomData/RandomData.c ./SimpleSort/SimpleSortLib.c
INLCLUDE_FLAGS = -I./DataSequence -I./RandomData/ -I./SimpleSort/
OBJDIR = ./
OBJECTS = $(addprefix $(OBJDIR)/,  $(SOURCES:.c=.o))
CC = gcc
CFLAGS = -Wall -Wextra -Wformat -O2

%.o: $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

sort: $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $@.out $^ DataSequence/DataSequenceMain.c

run: compile
	./sort.out
