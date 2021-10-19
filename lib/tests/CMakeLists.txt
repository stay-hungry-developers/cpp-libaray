cmake_minimum_required (VERSION 3.1)

set (CMAKE_CXX_STANDARD 11)

project (run_test)

include(ExternalProject)
ExternalProject_Add(gtest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
  PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
  INSTALL_COMMAND ""
)
ExternalProject_Get_Property(gtest source_dir binary_dir)


file(GLOB HELLO_SOURCES
    ../include/*.hpp
    ../src/*.cpp
)

include_directories("../include/")

add_executable(run_test test_src.cpp ${HELLO_SOURCES})


add_dependencies(run_test gtest)
include_directories(${source_dir}/include)
target_link_libraries(run_test ${binary_dir}/lib/libgtest.a)
target_link_libraries(run_test ${binary_dir}/lib/libgtest_main.a)

    
enable_testing()
add_test(NAME    run_test 
         COMMAND run_test)

