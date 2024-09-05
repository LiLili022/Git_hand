#!/bin/bash

# 假设 C++ 源文件名为 main.cpp
SOURCE_FILE="*.cpp"

# 选择编译器，这里以 g++ 为例
COMPILER="g++"

# 编译命令
# $COMPILER $SOURCE_FILE -o output
$COMPILER $SOURCE_FILE

# 检查编译是否成功
if [ $? -eq 0 ]; then
    echo "编译成功，可执行文件为 output"
else
    echo "编译失败"
fi