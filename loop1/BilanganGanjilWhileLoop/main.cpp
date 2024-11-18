#include <iostream>

int main()
{
    std::cout << "Bilangan ganjil sampai 10 (while loop):" << std::endl;
    int i = 1;
    while (i <=10) {
        std::cout << i << " ";
        i += 2;
    }
    std::cout << std::endl;
    return 0;
}
