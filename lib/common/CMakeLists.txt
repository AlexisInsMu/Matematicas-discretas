# FILEPATH: /home/programalexis/Documents/Practicas_Prog/C_practices/discretas/Discretas/common/CMakeLists.txt

# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.12)

# Define the project and its language
project(common LANGUAGES C)

# Add the source files for the library
add_library(common SHARED
    common.c
    common.h
    # Add more source files here if needed
)

# Set any additional library properties
# For example, you can set the library version and API compatibility
set_target_properties(common PROPERTIES
    VERSION 1.0
    SOVERSION 1
)

# Specify any required include directories
target_include_directories(common PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    
)

# Specify any required link libraries
#target_link_libraries(common PUBLIC
    # Add any required libraries here
#)
