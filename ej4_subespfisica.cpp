#include <iostream>
using namespace std;

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
    namespace Celec {
        const double k = 8987551787;
    }
        doble calcularEnergia(double masa) {
            return ;

    }
}

int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    return 0;
}