#include <iostream>

int main()
{
    int n;
    std::cout << "Masukkan ukuran:";
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
                std::cout << "*";
            else
                std::cout << "|";
        }
        std::cout << std::endl;
    }
    return 0;
}
