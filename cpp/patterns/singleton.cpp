#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    Singleton() {}
public:
    static Singleton* getInstance() {
        if (!instance) instance = new Singleton();
        return instance;
    }
    void showMessage() { std::cout << "Quantum Secure Core Initialized\n"; }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton::getInstance()->showMessage();
    return 0;
}
