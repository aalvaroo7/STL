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

        double calcularEnergia(double q, double r) {
            return k * q / r * r;

        }

        namespace Cmec {
            const double G = 6.67408e-11;

            double calcularEnergia(double m1, double m2, double r) {
                return G * m1 * m2 / r;
            }
        }
    }
}
int main() {
    cout << "campo electrico: " << Ciencia::Celec::calcularEnergia(10,5) << std::endl;
    cout << "energia potencial gravitatoria: " << Ciencia::Celec::Cmec::calcularEnergia(10, 5, 2) << std::endl;
        cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    return 0;
}