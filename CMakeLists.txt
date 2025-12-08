cmake_minimum_required(VERSION 3.20)
project(Codeforces)

set(CMAKE_CXX_STANDARD 17)

# 1. Search for all 'sol.cpp' files in any subdirectory (or solution.cpp in your case)
file(GLOB_RECURSE PROBLEM_FILES RELATIVE ${CMAKE_SOURCE_DIR} "*/solution.cpp")
# NOTE: If your file is named sol.cpp, change "*/solution.cpp" to "*/sol.cpp"

# 2. Loop through each file found and create an executable
foreach(FILE_PATH ${PROBLEM_FILES})
    # Get the folder name (e.g., "2173A") to use as target name
    get_filename_component(PROBLEM_NAME ${FILE_PATH} DIRECTORY)

    # Create executable
    add_executable(${PROBLEM_NAME} ${FILE_PATH})
endforeach()