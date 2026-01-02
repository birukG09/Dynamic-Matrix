#include <iostream>
#include <vector>
#include <memory>

class Matrix {
public:
    Matrix(size_t r, size_t c) : rows(r), cols(c), data(r * c, 0.0) {}
    
    void set(size_t r, size_t c, double val) { data[r * cols + c] = val; }
    double get(size_t r, size_t c) const { return data[r * cols + c]; }
    
    void print() const {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                std::cout << get(i, j) << " ";
            }
            std::cout << "\n";
        }
    }

private:
    size_t rows, cols;
    std::vector<double> data;
};

int main() {
    auto m = std::make_unique<Matrix>(3, 3);
    m->set(1, 1, 5.5);
    m->print();
    return 0;
}
