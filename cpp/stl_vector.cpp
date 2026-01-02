#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {4, 1, 3, 5, 2};
    std::sort(v.begin(), v.end());
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
