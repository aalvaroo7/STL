#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
#include "ej2_triangulo.cpp"
#include "ej2_circulo.cpp"

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}