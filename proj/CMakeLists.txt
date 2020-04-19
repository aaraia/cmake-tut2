cmake_minimum_required(VERSION 3.10)
add_executable(APP)
target_sources(APP 
                PRIVATE
                    include/box.hpp
                    src/box.cpp
                    src/main.cpp
                )       
target_include_directories(APP PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)                    
list(APPEND EXTRA_LIBS LIBA)
list(APPEND EXTRA_LIBS Boost::filesystem)
target_link_libraries(APP PRIVATE ${EXTRA_LIBS})
install(TARGETS APP DESTINATION ${PROJECT_BINARY_DIR}/TEMP/bin) # put this library in this location