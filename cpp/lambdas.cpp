#include <iostream>
#include <functional>

int main() {
    auto add = [](int a, int b) { return a + b; };
    std::cout << "3 + 4 = " << add(3, 4) << std::endl;
    return 0;
}
