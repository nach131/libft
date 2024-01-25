#include <iostream>

int main() {
    for (int i = 30; i <= 37; ++i) {
        for (int j = 40; j <= 49; ++j) {
            for (int k = 0; k <= 7; ++k) {
                std::cout << "\x1B[" << i << "m\x1B[" << j << "m\x1B[" << k << "mTexto color " << i << " con fondo " << j << " y atributo " << k << "\x1B[0m\n";
            }
        }
    }

    return 0;
}

