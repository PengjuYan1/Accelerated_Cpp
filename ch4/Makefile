# 编译器和编译选项
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17

# 可执行文件名
TARGET = main

# 源文件 (不包括头文件)
SRCS = ch4.cpp Student_info.cpp grade.cpp median.cpp

# 生成目标文件列表 (将.cpp替换为.o)
OBJS = $(SRCS:.cpp=.o)

# 头文件
HEADERS = Student_info.h grade.h median.h

# 默认目标
all: $(TARGET)

# 链接生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 目标文件依赖关系
ch4.o: ch4.cpp $(HEADERS)
Student_info.o: Student_info.cpp Student_info.h grade.h median.h
grade.o: grade.cpp grade.h
median.o: median.cpp median.h

# 通用编译规则
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成文件
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
