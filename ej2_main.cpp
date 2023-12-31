#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
#include "ej2_triangulo.cpp"
#include "ej2_circulo.cpp"
#include "ej2_rectangulo.cpp"
#include "ej2_cuadrado.cpp"
int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    std::cout << "Area del rectangulo: " << Geometria::calcularAreaRectangulo(5, 3) << std::endl;
    cout << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(5, 3) << std::endl;
    return 0;
}