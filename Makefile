# All-in-one build script for the suite

CC=gcc
CXX=g++
CFLAGS=-Iinclude -O3
CXXFLAGS=-O3 -std=c++17

all:
        mkdir -p build
        $(CC) $(CFLAGS) c/heap_sort.c -o build/heap_sort
        $(CC) $(CFLAGS) c/recursion.c -o build/recursion
        $(CC) $(CFLAGS) c/binary_search.c -o build/binary_search
        $(CC) $(CFLAGS) c/quick_sort.c -o build/quick_sort
        $(CC) $(CFLAGS) c/fibonacci.c -o build/fibonacci
        $(CC) $(CFLAGS) c/gcd.c -o build/gcd
        $(CC) $(CFLAGS) c/prime_check.c -o build/prime_check
        $(CC) $(CFLAGS) c/linear_search.c -o build/linear_search
        $(CC) $(CFLAGS) c/selection_sort.c -o build/selection_sort
        $(CC) $(CFLAGS) c/insertion_sort.c -o build/insertion_sort
        $(CC) $(CFLAGS) c/knapsack.c -o build/knapsack
        $(CC) $(CFLAGS) c/edit_distance.c -o build/edit_distance
        $(CC) $(CFLAGS) c/encryption/aes_mock.c -o build/aes_mock
        $(CC) $(CFLAGS) c/encryption/diffie_hellman.c -o build/diffie_hellman
        $(CXX) $(CXXFLAGS) cpp/quantum/qubit_sim.cpp -o build/qubit_sim
        $(CXX) $(CXXFLAGS) cpp/stl_map.cpp -o build/stl_map
        $(CXX) $(CXXFLAGS) cpp/multithreading.cpp -o build/multithreading -lpthread
        echo "Build complete."
