#include <iostream>

int main() {
    int nilai;
    for (int i = 1; i <= 15; i++) {
        std::cout << "siswa ke " << i;
        for (int j = 1; j <= 3; j++) {
            std::cout << "\nmasukkan nilai ke " << j;
            std::cin >> nilai;
        }
        std::cout << std::endl;

        return 0;
    }
}


    /*int i, k, katak, hewan, ayam, kambing;
    i = 1;
    while (1 <= 5) {
        std::cout << "Hewan apa ini?" << i;
        if (hewan )
        i = i + 1;
    }
    std::cout << " didapat ayam" << ayam << " , kambing" << kambing << std::endl;
    return 0;
}


    /*
    *int i, k, katak, hewan, ayam, kambing;
    i = 1;
    while (1 <= katak) {
    n = input ("Hewan apa ini?" + i;
    i = i + 1
    endwhile
    */

