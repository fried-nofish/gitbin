# 设置编译器
CXX = g++
CXXFLAGS = -std=c++11

TARGET = asd

SOURCES = main.cpp 

OBJECTS = $(SOURCES:.cpp=.o)

INCLUDE = myheader.h

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del $(OBJECTS)
