#include <iostream>

int main() {
    int numero;
    int suma = 0;
    int cantidad_numeros = 0;
    int numero_mayor = INT_MIN;
    int numero_menor = INT_MAX;
    int resta_acumulada = 0;

    char continuar;

    std::cout << "Ingrese numeros. Ingrese '0' para terminar: " << std::endl;
    std::cin >> numero;

    while (numero != 0) {
        // Actualizar suma
        suma += numero;
        cantidad_numeros++;

        // Actualizar número mayor y número menor
        if (numero > numero_mayor) {
            numero_mayor = numero;
        }
        if (numero < numero_menor) {
            numero_menor = numero;
        }

        // Resta acumulada
        resta_acumulada -= numero;

        std::cout << "Ingrese otro numero (o ingrese '0' para terminar): ";
        std::cin >> numero;
    }

    if (cantidad_numeros > 0) {
        double promedio = static_cast<double>(suma) / cantidad_numeros;
        std::cout << "Promedio: " << promedio << std::endl;
        std::cout << "Numero mayor: " << numero_mayor << std::endl;
        std::cout << "Numero menor: " << numero_menor << std::endl;
        std::cout << "Suma: " << suma << std::endl;
        std::cout << "Resta acumulada: " << resta_acumulada << std::endl;
    } else {
        std::cout << "No se ingresaron numeros." << std::endl;
    }

    return 0;
}


