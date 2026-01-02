#include <iostream>
#include <string>

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override { std::cout << "Drawing Circle\n"; }
};

class Square : public Shape {
public:
    void draw() override { std::cout << "Drawing Square\n"; }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();
    s1->draw();
    s2->draw();
    delete s1;
    delete s2;
    return 0;
}
