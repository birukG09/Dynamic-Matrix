#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Acquired\n"; }
    ~Resource() { std::cout << "Released\n"; }
};

int main() {
    std::unique_ptr<Resource> res = std::make_unique<Resource>();
    return 0;
}
