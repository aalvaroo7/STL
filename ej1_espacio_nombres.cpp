#include <iostream>
#include <cmath>
#include <cstdlib>
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

    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        return a / b;
    }
    double calcularPotencia(double base, int exponente) {
        double resultado = 1.0;

        for (int i = 0; i < exponente; ++i) {
            resultado *= base;
        }

        return resultado;
    }
    int raiz_cuadrada(int a) {
        return sqrt(a);
    }

}
int main() {
    cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    cout << "multiplicacion:" << Matematicas::multiplicacion(5, 3) << std::endl;
    cout <<  "Division:" << Matematicas::division(10, 5) << std::endl;
    cout <<  "potencia:" << Matematicas::potencia(5, 2) << std::endl;
    cout << "Raiz cuadrada:" << Matematicas::raiz_cuadrada(36) << std::endl;
    return 0;
}