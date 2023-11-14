#include <iostream>
using namespace std;
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
 cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
 cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    return 0;
}
//