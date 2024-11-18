#include <iostream>

int main()
{
    int i, n;
    std::cout << "tentukan nilai maksimum sebuah angka (input angka):";
    std::cin >> n;
    for (i = 2; i <= n; i+=2) {
        std::cout << i << " adalah bilangan genap" << std::endl;
    }
    return 0;
}
