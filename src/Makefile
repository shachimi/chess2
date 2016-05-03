SRCS=main.cc game/board.cc
OBJS=$(SRCS:.cc=.o)
CFLAGS=-Werror -Wall
BIN=test

all: $(BIN)

%.o: %.cc
	g++ $(CFLAGS) -c $^ -o $@

$(BIN): $(OBJS)
	g++ $(CFLAGS) -o $@ $^

clean:
	find . -name '*.o' -delete -print
