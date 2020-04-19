cmake_minimum_required(VERSION 3.10)
add_library(LIBA)
target_sources(LIBA 
                PRIVATE 
                    src/lib.cpp # does not need CMAKE_CURRENT_SOURCE_DIR prefix as this cpp file will only be used internally to this library
                PUBLIC 
                    ${CMAKE_CURRENT_SOURCE_DIR}/include/lib/lib.hpp # this is the path that other projects will use to find this file, so it needs to have CMAKE_CURRENT_SOURCE_DIR
                )                
# where can this libraries files be found
target_include_directories(LIBA 
                            PUBLIC
                                $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/lib>  # when building this library this is the location it will be found 
                                $<INSTALL_INTERFACE:include/lib>)  # when installing the library this is the lcoation <prefix>/include/mylib
install(TARGETS LIBA DESTINATION ${PROJECT_BINARY_DIR}/TEMP/lib) # put the library in this location
