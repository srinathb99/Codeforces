cmake_minimum_required(VERSION 3.20)
project(Codeforces)

set(CMAKE_CXX_STANDARD 17)

# Search for all 'solution.cpp' files
file(GLOB_RECURSE PROBLEM_FILES
        RELATIVE ${CMAKE_SOURCE_DIR}
        "*/solution.cpp")

# Loop through each file found
foreach(FILE_PATH ${PROBLEM_FILES})
    # Get the directory path (e.g., "1068/2173A")
    get_filename_component(DIR_PATH ${FILE_PATH} DIRECTORY)

    # Replace all '/' with '_' to create a valid target name
    # "1068/2173A" -> "1068_2173A"
    string(REPLACE "/" "_" TARGET_NAME "${DIR_PATH}")

    # Create executable using the sanitized name
    add_executable(${TARGET_NAME} ${FILE_PATH})
endforeach()
