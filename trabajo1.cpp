#include <iostream>
#include <climits>

const int FILAS = 6;
const int COLUMNAS = 7;

void obtenerMinMaxPromedio(int matriz[][COLUMNAS]) {
    // Arrays para almacenar los mínimos, máximos y sumas de cada columna
    int minimosColumna[COLUMNAS];
    int maximosColumna[COLUMNAS];
    double sumasColumna[COLUMNAS] = {0};

    // Inicializar los mínimos con el valor máximo y los máximos con el valor mínimo
    for (int i = 0; i < COLUMNAS; ++i) {
        minimosColumna[i] = INT_MAX;
        maximosColumna[i] = INT_MIN;
    }

    // Calcular mínimos, máximos y sumas por fila y columna
    for (int i = 0; i < FILAS; ++i) {
        // Variables para almacenar mínimos y máximos por fila
        int minimoFila = INT_MAX;
        int maximoFila = INT_MIN;
        double sumaFila = 0;

        for (int j = 0; j < COLUMNAS; ++j) {
            int elemento = matriz[i][j];
            // Mínimo y máximo por fila
            if (elemento < minimoFila) {
                minimoFila = elemento;
            }
            if (elemento > maximoFila) {
                maximoFila = elemento;
            }
            // Mínimo y máximo por columna
            if (elemento < minimosColumna[j]) {
                minimosColumna[j] = elemento;
            }
            if (elemento > maximosColumna[j]) {
                maximosColumna[j] = elemento;
            }
            // Suma por columna
            sumasColumna[j] += elemento;
            // Suma por fila
            sumaFila += elemento;
        }

        double promedioFila = sumaFila / COLUMNAS;
        std::cout << "Para la fila " << i + 1 << ":\n";
        std::cout << "Numero maximo: " << maximoFila << "\n";
        std::cout << "Numero minimo: " << minimoFila << "\n";
        std::cout << "Promedio: " << promedioFila << "\n\n";
    }

    // Calcular promedios e imprimir resultados por columna
    for (int j = 0; j < COLUMNAS; ++j) {
        double promedioColumna = sumasColumna[j] / FILAS;
        std::cout << "Para la columna " << j + 1 << ":\n";
        std::cout << "Numero maximo: " << maximosColumna[j] << "\n";
        std::cout << "Numero minimo: " << minimosColumna[j] << "\n";
        std::cout << "Promedio: " << promedioColumna << "\n\n";
    }
}

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {3, 5, 6, 9, 2, 8, 1},
        {1, 4, 7, 2, 5, 3, 6},
        {9, 8, 7, 6, 5, 4, 3},
        {1, 2, 3, 4, 5, 6, 7},
        {7, 6, 5, 4, 3, 2, 1},
        {8, 2, 4, 6, 8, 1, 3}
    };

    obtenerMinMaxPromedio(matriz);

    return 0;
}



