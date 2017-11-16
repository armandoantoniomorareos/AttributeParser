SRC+=test.cpp\
		src/AttributeParser.cpp

OBJ = "run"

all: $(SRC)
	g++ -Wall -o $(OBJ) $^
