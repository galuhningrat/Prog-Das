#include <iostream>

int main()
{
    std::cout << "Bilangan ganjil sampai 10 (for loop): \n";
    for (int i = 1; i <= 10; i += 2) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
    return 0;
}