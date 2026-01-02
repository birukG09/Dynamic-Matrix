#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
