#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

int main() {
    // Vector
    std::vector<int> numerosLista {1, 2, 3, 4, 5};
    numerosLista.push_back(6);

    // Mapa
    std::map<std::string, int> edades;
    edades["Maria"] = 30;
    edades.erase("Maria");

    // Conjunto
    std::set<int> conjuntoNumerico {2, 4, 6, 8, 10};
    conjuntoNumerico.insert(12);
    conjuntoNumerico.erase(2);

    return 0;
}