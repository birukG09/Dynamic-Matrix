cmake_minimum_required(VERSION 3.10)
project(CCppAsmSuite)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

# C Algorithms
add_executable(binary_search c/binary_search.c)
add_executable(quick_sort c/quick_sort.c)
add_executable(fibonacci c/fibonacci.c)
add_executable(gcd c/gcd.c)
add_executable(prime_check c/prime_check.c)
add_executable(linear_search c/linear_search.c)
add_executable(selection_sort c/selection_sort.c)
add_executable(insertion_sort c/insertion_sort.c)
add_executable(knapsack c/knapsack.c)
add_executable(edit_distance c/edit_distance.c)

# Previous C files
add_executable(heap_sort c/heap_sort.c)
add_executable(recursion c/recursion.c)
add_executable(sorting c/sorting.c)
add_executable(string_rev c/string_rev.c)
add_executable(linked_list c/linked_list.c)

# C++ files
add_executable(stl_map cpp/stl_map.cpp)
add_executable(multithreading cpp/multithreading.cpp)
target_link_libraries(multithreading pthread)
add_executable(matrix_oo cpp/matrix_oo.cpp)
add_executable(shape_hierarchy cpp/shape_hierarchy.cpp)
add_executable(templates cpp/templates.cpp)
add_executable(stl_vector cpp/stl_vector.cpp)
