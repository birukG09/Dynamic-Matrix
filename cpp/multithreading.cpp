#include <iostream>
#include <thread>

void printHello() {
    std::cout << "Hello from thread!\n";
}

int main() {
    std::thread t1(printHello);
    t1.join();
    return 0;
}
