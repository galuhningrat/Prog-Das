#include <iostream>

int main()
{
    /* int n = 6, m = 3;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    */

    int n = 5;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i % n == 0 && j % n == 0)
                std::cout << "*";
            else
                std::cout << "|";
        }
        std::cout << std::endl;
    }
        return 0;
}
