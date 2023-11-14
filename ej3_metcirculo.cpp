#include <iostream>
using namespace std;
namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
}

int main() {
    Geometria::Circulo c(5);
    cout << "Area: " << c.calcularArea() << std::endl;
    cout << "Perimetro: " << c.calcularPerimetro() << std::endl;
    return 0;
}