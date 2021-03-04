VPATH := src include

CXX := g++
CXXFLAGS := -g
BUILD := build
SRC := src
INCLUDE := include
LIB := lib
TARGET := App
OBJECTS := main.o
FULLOBJECTS := $(foreach n,$(OBJECTS),$(BUILD)/$(n))

MODELNAMES := A B C
MODELHEADERPATH := $(foreach n,$(MODELNAMES),-I../$(n)/include)
MODELSONAME := $(foreach n,$(MODELNAMES),-L../$(n)/lib -l$(n))

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(FULLOBJECTS)
	$(CXX) -o $(BUILD)/$@ $^ -L$(LIB)  $(MODELSONAME)

$(FULLOBJECTS): $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(CXX) -fPIC -c -o $(BUILD)/$@ $< -I$(INCLUDE) $(MODELHEADERPATH)

clean:
	-rm -rf $(BUILD)/**
