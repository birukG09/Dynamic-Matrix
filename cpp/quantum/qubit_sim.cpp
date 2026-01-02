#include <iostream>
#include <vector>
#include <complex>
#include <cmath>

typedef std::complex<double> Complex;

class Qubit {
public:
    Complex alpha, beta;
    Qubit(Complex a, Complex b) : alpha(a), beta(b) {}

    void hadamard() {
        Complex a = alpha;
        Complex b = beta;
        alpha = (a + b) / std::sqrt(2.0);
        beta = (a - b) / std::sqrt(2.0);
    }

    void print() {
        std::cout << "|psi> = (" << alpha.real() << " + " << alpha.imag() << "i)|0> + (" 
                  << beta.real() << " + " << beta.imag() << "i)|1>" << std::endl;
    }
};

int main() {
    Qubit q(1.0, 0.0);
    std::cout << "Initial state:" << std::endl;
    q.print();
    
    std::cout << "Applying Hadamard gate:" << std::endl;
    q.hadamard();
    q.print();
    
    return 0;
}
