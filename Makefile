# cc and flags
CC = g++
CXXFLAGS = -std=c++11 -g -Wall -I include/
#CXXFLAGS = -std=c++11 -O3 -Wall

# folders
INCLUDE_FOLDER = -I include/ -I third_party/
BIN_FOLDER = ./bin/
OBJ_FOLDER = ./obj/
SRC_FOLDER = ./src/

SRCEXT := cpp

# all sources, objs, and header files
MAIN = main
TARGET = run.out
SRC = $(shell find $(SRC_FOLDER) -type f -name *.$(SRCEXT))
OBJ = $(patsubst $(SRC_FOLDER)/%.cpp, $(OBJ_FOLDER)%.o, $(SRC))

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.$(SRCEXT)
	@mkdir -p $(@D)
	$(CC) $(CXXFLAGS) $(INCLUDE_FOLDER) -c -o $@ $<

all: $(OBJ)
	$(CC) $(CXXFLAGS) -o $(BIN_FOLDER)$(TARGET) $(OBJ)

clean:
	@rm -rf $(OBJ_FOLDER)* $(BIN_FOLDER)*
