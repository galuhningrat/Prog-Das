#include <iostream>

int main()
{
    std::cout << "Bilangan ganjil sampai 10 (do-while loop): ";
    int i = 1;
    do {
        std::cout << i << " ";
        i += 2;
    } while (i < 10);
    std::cout << std::endl;
    return 0;
}
