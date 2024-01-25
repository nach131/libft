#include <iostream>

int main() {
    for (int i = 30; i <= 37; ++i) {
        for (int j = 40; j <= 49; ++j) {
//            std::cout << "\x1B[" << i << "m\x1B[" << j << "mTexto color " << i << " con fondo " << j << "\x1B[0m\n";
            std::cout << "\x1B[" << i << "m\x1B[" << j << "mTexto color " << j << " con fondo " << i << "\x1B[0m " << "\\x1B[" << i << "m\\x1B[" << j << "m\n";

            // Incrementa el contador después de cada combinación
            if ((i - 30) * 10 + (j - 40) == 199) {
                break;
            }
        }

        // Sal del bucle exterior si ya se han generado las 200 combinaciones
        if ((i - 30) * 10 + 9 >= 199) {
            break;
        }
    }

    return 0;
}

