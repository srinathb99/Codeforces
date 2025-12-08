cmake_minimum_required(VERSION 4.1)
project(Codeforces)

set(CMAKE_CXX_STANDARD 20)

# 1. Search for all 'sol.cpp' files in any subdirectory
file(GLOB_RECURSE PROBLEM_FILES RELATIVE ${CMAKE_SOURCE_DIR} "*/sol.cpp")

# 2. Loop through each file found
foreach(FILE_PATH ${PROBLEM_FILES})
    # Get the folder name (e.g., "252A") to use as the executable name
    get_filename_component(PROBLEM_NAME ${FILE_PATH} DIRECTORY)

    # Create an executable for this problem
    add_executable(${PROBLEM_NAME} ${FILE_PATH})
endforeach()