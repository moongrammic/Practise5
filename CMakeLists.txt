cmake_minimum_required(VERSION 3.5)
project(Practise5)

# Задание 1
set(TASK1_SRC task1/main.cpp task1/long_arithmetic.cpp)
add_executable(Task1 ${TASK1_SRC})

# Задание 2
add_executable(Task2 task2/main.cpp)

# Задание 3
add_executable(Task3 task3/main.cpp)