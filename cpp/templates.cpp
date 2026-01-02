#include <iostream>

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Max of 10, 20: " << getMax(10, 20) << "\n";
    std::cout << "Max of 10.5, 5.5: " << getMax(10.5, 5.5) << "\n";
    return 0;
}
