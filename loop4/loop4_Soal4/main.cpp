#include <iostream>

int main()
{
    int n;
    std::cout<<"Masukkan ukuran:";
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if ((i % n == (n / 2) -1) || (i % n == (n / 2) + 1) || (j % n == n / 2))
                std::cout << "I";
            else if (i % n == n / 2)
                std::cout << " ";
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
    return 0;
}
