#include <iostream>
using namespace std;
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
//respuesta proporcionada por ruben a lo que le añado como nos ha sido requerido cuatro ejemplos
//de espacio de nombres que seran
//multiplicacion, division, potencia y raiz cuadrada

namespace matematicas {
    int multiplicacion(int a, int b) {
        return a * b;
    }
namespace matematicas{
    int division(int a, int b) {
        return a / b;
    }
    int main() {
        cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
        cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
        return 0;
    }
}
