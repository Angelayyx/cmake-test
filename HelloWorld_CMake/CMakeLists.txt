# CMakeList.txt: HelloWorld_CMake 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)
link_directories("${CMAKE_BINARY_DIR}/lib")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
# 将源代码添加到此项目的可执行文件。
add_executable (CMakeProject "HelloWorld_CMake.cpp" "HelloWorld_CMake.h"   )

target_link_libraries(CMakeProject CMakeStatic)

# TODO: 如有需要，请添加测试并安装目标。
