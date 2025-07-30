cmake_minimum_required(VERSION 3.10)
project(MyLibrary VERSION 1.0.0 LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 定义库
add_library(MyLibrary SHARED src/mylib.cpp)

# 指定头文件的位置
target_include_directories(MyLibrary
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# 定义 MYLIB_EXPORTS 宏，用于导出符号
target_compile_definitions(MyLibrary
    PRIVATE MYLIB_EXPORTS
)

# 设置库的输出目录（可选）
set_target_properties(MyLibrary PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)
