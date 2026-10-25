
cmake_minimum_required(VERSION 3.14)
project(Lab06_1_rec)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)
add_executable(lab06_1_rec lab06_1_rec.cpp)
enable_testing()

add_executable(runTests test.cpp)
target_link_libraries(runTests gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)