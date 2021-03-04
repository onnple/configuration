VPATH := src include

CXX := g++
CXXFLAGS := -g
BUILD := build
SRC := src
INCLUDE := include
LIB := lib
TARGET := C
OBJECTS := print.o
FULLOBJECTS := $(foreach n,$(OBJECTS),$(BUILD)/$(n))
NAME := $(LIB)/lib$(TARGET).so

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(FULLOBJECTS)
	$(CXX) -shared -o $(NAME) $^ -L$(LIB)  # -l<libname>

$(FULLOBJECTS): $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(CXX) -fPIC -c -o $(BUILD)/$@ $< -I$(INCLUDE)
	
clean:
	-rm -rf $(BUILD)/** $(NAME)
