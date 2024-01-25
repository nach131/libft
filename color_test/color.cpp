#include <iostream>

int main()
{
    {
        for (int i = 40; i <= 49; ++i)
        {
            for (int j = 90; j <= 97; ++j)
            {
                std::cout << "\x1B[" << i << "m\x1B[" << j << "mTexto color " << j << " con fondo " << i << "\x1B[0m "
                          << "\\x1B[" << i << "m\\x1B[" << j << "m\n";
            }
        }
    }
    std::cout << "________________________" << std::endl;
    {
        for (int i = 40; i <= 47; ++i)
        {
            for (int j = 30; j <= 37; ++j)
            {
                std::cout << "\x1B[" << i << "m\x1B[" << j << "mTexto color " << j << " con fondo " << i << "\x1B[0m "
                          << "\\x1B[" << i << "m\\x1B[" << j << "m\n";
            }
        }
        std::cout << "________________________" << std::endl;
        {
            std::cout << "\x1B[40mNegro\x1B[0m" << std::endl;
            std::cout << "\x1B[41mRojo\x1B[0m" << std::endl;
            std::cout << "\x1B[42mVerde\x1B[0m" << std::endl;
            std::cout << "\x1B[43mAmarillo\x1B[0m" << std::endl;
            std::cout << "\x1B[44mAzul\x1B[0m" << std::endl;
            std::cout << "\x1B[45mMagenta\x1B[0m" << std::endl;
            std::cout << "\x1B[46mCyan\x1B[0m" << std::endl;
            std::cout << "\x1B[47mBlanco\x1B[0m" << std::endl;
        }
    }

    return 0;
}
