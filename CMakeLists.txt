cmake_minimum_required(VERSION 3.12)
project(Threads)

set(CMAKE_CXX_STANDARD 14)

add_executable(Thread main.c MergeSort.c MergeSort.h MatrixMultiplication.c MatrixMultiplication.h ReadFromFile.c ReadFromFile.h WriteInFile.c WriteInFile.h)