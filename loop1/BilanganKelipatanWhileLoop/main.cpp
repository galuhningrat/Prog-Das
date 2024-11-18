#include <iostream>

int main()
{
    std::cout << "Bilangan kelipatan 5 sampai 100 (while loop): ";
    int i = 5;
    while (i <= 100) {
        std::cout << i << " ";
        i += 5;
    }
    std::cout << std::endl;
    return 0;
}
