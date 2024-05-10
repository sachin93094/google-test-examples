cmake_minimum_required(VERSION 3.0)

# Define your project
project(ProjectName)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Include directory containing cpp_sorter.h
include_directories(${CMAKE_SOURCE_DIR}/include)  # Adjust the path as necessary

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test/cpp_sorter_test.cpp cpp_sorter.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
