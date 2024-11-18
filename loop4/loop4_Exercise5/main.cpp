#include <iostream>

int main()
{
    int n, pilihan;
    std::cout << "Masukkan ukuran:" << std::endl;
    std::cin >> n;

    std::cout<<"Tentukan apakah Anda ingin menampilkan:\n"
               "1. soal 1\n"
               "2. soal 2\n"
               "3. soal 3\n"
               "4. soal 4:\n";
    std::cin >> pilihan;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            switch (pilihan) {
                case 1:
                    if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
                        std::cout << "*";
                    else
                        std::cout << "|";
                break;
                case 2:
                    if ( i % n == 0 && j % n == 0)
                        std::cout<<"*";
                    else if ((i % n == n/2 && j % 1 == 0) || (i % 1 == 0 && j % n == n/2))
                        std::cout<<"I";
                    else
                        std::cout<<".";
                break;
                case 3:
                    if ((i % n == n/2 && j > 0))
                        std::cout << " ";
                    else if ((i % n == 0 || j % n == n/2))
                        std::cout << "I";
                    else
                        std::cout << ".";
                break;
                case 4:
                    if ((i % n == (n / 2) -1) || (i % n == (n / 2) + 1) || (j % n == n / 2))
                        std::cout << "I";
                    else if (i % n == n / 2)
                        std::cout << " ";
                    else
                        std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
