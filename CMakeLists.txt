# CMakeLists.txt

cmake_minimum_required(VERSION 3.4)

project(FA_Rule1 VERSION 1.0
                      DESCRIPTION "My very first rule")

include_directories(./src)
if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

############################################################################
# Create shared Library (dll, so)
############################################################################
# here shared is used as module cannot be linked?
add_library(farule1 SHARED src/farule1.cpp)
# use default build directory
# not used         set_target_properties(inihandler PROPERTIES LIBRARY_OUTPUT_DIRECTORY ../dll)
set_target_properties(farule1 PROPERTIES OUTPUT_NAME farule1)
set_target_properties(farule1 PROPERTIES VERSION "1.0")
if (UNIX)
    # not used     add_custom_command(TARGET inihandler PRE_BUILD COMMAND mkdir ../dll)
    add_custom_command(TARGET farule1 POST_BUILD
                       COMMAND ln -sf libfarule1.so.1.0 libfarule1.so.1
                       COMMAND ln -sf libfarule1.so.1.0 libfarule1.so)
    # not used         WORKING_DIRECTORY ../dll)
endif()
