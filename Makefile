CC = gcc
CXX = g++
INC_DIR = inc/
LIBS_DIR = libs/
SRC_DIR = src/
#CFLAGS = -I$(INC_DIR) -fPIC -g
CXXFLAGS = -I$(INC_DIR) -fPIC -g
BUILD_DIR = build/

all: clean create testLibrary

create:
	mkdir build/

testLibrary: $(BUILD_DIR)/main.o $(BUILD_DIR)/addition.o
	$(CXX) -o $(BUILD_DIR)/libtest.so $(BUILD_DIR)/main.o $(BUILD_DIR)/addition.o

$(BUILD_DIR)/main.o:
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/main.cpp -o build/main.o

$(BUILD_DIR)/addition.o:
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/addition.cpp -o build/addition.o

clean:
	rm -rf build/
