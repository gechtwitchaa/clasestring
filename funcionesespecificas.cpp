#include <iostream>
#include <string>

int main() {

    std::string cadena = "Hola, mundo!";

    std::string subcadena = "mundo";
    size_t indice = cadena.find(subcadena);
    if (indice != std::string::npos) {
        std::cout << "La subcadena '" << subcadena << "' comienza en el índice: " << indice << std::endl;


        std::string nueva_subcadena = "universo";
        cadena.replace(indice, subcadena.length(), nueva_subcadena);
        std::cout << "Cadena con reemplazo: " << cadena << std::endl;
    } 