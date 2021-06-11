# makes .d files in obj dir -> auto link

## VARIABLES ##

CC = g++
EXT = .cpp

CXXFLAGS = -std=c++11 -Wall -O0 -g
LDFLAGS =

SRC_DIR = ./src
OBJ_DIR = ./obj

TARGET = main

SRCS = $(notdir $(wildcard $(SRC_DIR)/*$(EXT)))
OBJS = $(SRCS:$(EXT)=.o)

OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))
DEPS = $(OBJECTS:.o=.d)

## SCRIPT ##

all: $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%$(EXT)
	$(CC) $(CXXFLAGS) -c $< -o $@ -MD $(LDFLAGS)

$(TARGET) : $(OBJECTS)
	$(CC) $(CXXFLAGS) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

.PHONY: clean all
clean:
	rm -f $(OBJECTS) $(DEPS) $(TARGET)

-include $(DEPS)
