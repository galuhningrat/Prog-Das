#include <iostream>

int main()
{
    std::cout << "Bilangan kelipatan 5 sampai 100 (do-while loop): ";
    int i = 5;
    do {
        std::cout << i << " ";
        i += 5;
    } while (i <= 100);
    return 0;
}
