message("Test Dir:${CMAKE_BINARY_DIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

add_library(CMakeStatic STATIC "CMakeStatic.cpp" "CMakeStatic.h")
