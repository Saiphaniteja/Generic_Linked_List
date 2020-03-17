CC = gcc
CXX = g++
INC_DIR = inc/
LIBS_DIR = libs/
SRC_DIR = src/
#CFLAGS = -I$(INC_DIR) -fPIC -g
CXXFLAGS = -I$(INC_DIR) -fPIC -g
BUILD_DIR = build/

all: clean create linkedListLibrary

create:
	mkdir build/

linkedListLibrary: $(BUILD_DIR)/main.o $(BUILD_DIR)/linkedListLibrary.o
	$(CXX) -o $(BUILD_DIR)/liblinkedList.so $(BUILD_DIR)/main.o $(BUILD_DIR)/linkedListLibrary.o

$(BUILD_DIR)/main.o:
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/main.cpp -o build/main.o

$(BUILD_DIR)/linkedListLibrary.o:
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/linkedListLibrary.cpp -o build/linkedListLibrary.o

clean:
	rm -rf build/
