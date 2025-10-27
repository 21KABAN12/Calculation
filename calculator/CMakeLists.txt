cmake_minimum_required(VERSION 3.12)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

# Основное приложение
add_executable(calculator_app src/main.cpp src/calculator.cpp)
target_include_directories(calculator_app PUBLIC include)

# Тесты
enable_testing()
find_package(GTest REQUIRED)
add_executable(calculator_test tests/test_calculator.cpp src/calculator.cpp)
target_link_libraries(calculator_test GTest::gtest GTest::gtest_main)
target_include_directories(calculator_test PUBLIC include)
add_test(NAME calculator_test COMMAND calculator_test)