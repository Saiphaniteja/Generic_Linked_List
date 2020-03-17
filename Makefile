CC = gcc
CXX = g++
INC_DIR = inc/
LIBS_DIR = libs/
SRC_DIR = src/
CXXFLAGS = -I$(INC_DIR) -L$(LIBS_DIR) -fPIC -g
BUILD_DIR = build/

all: clean create linkedListLibrary testLinkedListBinary

create:
	mkdir build/

testLinkedListBinary: $(BUILD_DIR)/main.o 
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/testLinkedListBinary $(BUILD_DIR)/main.o -llinkedList
	
linkedListLibrary: $(BUILD_DIR)/linkedListLibrary.o
	$(CXX) -o $(LIBS_DIR)/liblinkedList.so $(BUILD_DIR)/linkedListLibrary.o -shared  

$(BUILD_DIR)/main.o:
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/main.cpp -o build/main.o

$(BUILD_DIR)/linkedListLibrary.o:
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/linkedListLibrary.cpp -o build/linkedListLibrary.o

clean:
	rm -rf build/
