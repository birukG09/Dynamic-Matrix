#include <iostream>
#include <exception>

int main() {
    try {
        throw std::runtime_error("Critical Error");
    } catch (const std::exception& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
