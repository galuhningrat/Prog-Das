#include <iostream>

int main()
{
    std::cout << "Deret Fibonacci sampai 100 (for loop): ";
    int a = 1, b = 1;
    std::cout << a << " " << b << " ";
    for (int next = a + b; next <= 100; next = a + b) {
        std::cout << next << " ";
        a = b;
        b = next;
    }
    std::cout << std::endl;
    return 0;
}
