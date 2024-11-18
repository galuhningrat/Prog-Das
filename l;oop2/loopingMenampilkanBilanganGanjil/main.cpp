#include <iostream>

// Program menampilkan bilangan ganjil
int main()
{
    int i, n;
    std::cout<<"tentukan nilai maksimum sebuah angka (input angka)";
    std::cin >> n;
    for (i = 1; i <= n; i+=2) {
        std::cout << i << " adalah bilangan ganjil\n";
    }
    return 0;
}
