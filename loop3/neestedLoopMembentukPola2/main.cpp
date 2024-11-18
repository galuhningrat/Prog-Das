#include <iostream>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % n == 1 && j % n == 1 || i % n == 3 && j % n == 0 || i % n == 0 && j % n == 1)
                std::cout << '*';
            else
                std::cout << '|';
        }
        std::cout << std::endl;
    }
    return 0;
}

/* menurut apa yang saya pahami:
 * jadi, representasi i menempatkan * pada baris loop ke berapa (vertikal)
 * sedangkan representasi j menempatkan | pada bit ke berapa (horizontal)
 * namun, meskipun begitu, saya masih belum sepenuhnya mengerti. hanya saja, bagian
 * perhitungannya tampak sederhana untuk dipikirkan. */
