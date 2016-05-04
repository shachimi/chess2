SRCS=main.cc game/board.cc game/cell.cc pieces/piece.cc
OBJS=$(SRCS:.cc=.o)
CFLAGS=-Werror -Wall
INCLUDES=-I.
BIN=test

all: $(BIN)

%.o: %.cc
	g++ $(CFLAGS) $(INCLUDES) -c $^ -o $@

$(BIN): $(OBJS)
	g++ $(CFLAGS) $(INCLUDES) -o $@ $^

clean:
	find . -name '*.o' -delete -print
