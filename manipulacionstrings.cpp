#include <iostream>
#include <string>

int main() {

    std::string cadena = "hola amada";

    std::string subcadena = cadena.substr(5, 5);

    std::string otra_cadena = "bella ";
    cadena.insert(5, otra_cadena);

    std::cout << "Cadena resultante: " << cadena << std::endl;

    return 0;
}

