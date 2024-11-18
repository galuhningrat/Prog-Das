#include <iostream>

int main()
{
    std::cout << "Bilangan kelipatan 5 sampai 100 (for loop): ";
    for (int i = 0; i <= 100; i += 5) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
