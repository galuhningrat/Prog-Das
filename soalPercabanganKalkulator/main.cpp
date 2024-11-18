#include <iostream>
#include <stdlib.h>


int main() {
    float sRusuk, r, luas, volume;
    int alasSegitiga, tinggiSegitiga, sisiMiringSegitiga, choices, keliling;
    mulai:
    std::cout << "\t\t=========================\n";
    std::cout << "\t\tPROGRAM KALKULATOR BIDANG\n";
    std::cout << "\t\t=========================\n\n\t";
    std::cout << "1. Bangun datar\n\t2. Bangun ruang\n\nPilih 1/2: \n";
    int choice;
    std::cin >> choice;
    if (choice == 1) {
        std::cout << "\nMenghitung bangun datar:\n";
        std::cout << "\t1. Luas & Keliling Segitiga\n";
        std::cout << "\t2. Kembali ke Menu\n";
        std::cout << "Bangun datar adalah bangun dua dimensi sehingga cara menghitungnya ditentukan dari setiap sisi.\n\n";
        std::cout << "Pilih yang ingin Anda hitung: \n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Input alas segitiga:\n";
            std::cin >> alasSegitiga;
            std::cout << "Input tinggi segitiga:\n";
            std::cin >> tinggiSegitiga;
            std::cout << "Input sisi miring segitiga:\n";
            std::cin >> sisiMiringSegitiga;

            // menghitung luas segitiga
            luas = 0.5 * alasSegitiga * tinggiSegitiga; // menggunakan 0.5 untuk mewakili 1/2
            std::cout << "Luas segitiga Anda adalah = " << luas << std::endl;
            // menghitung keliling segitiga
            keliling = alasSegitiga + sisiMiringSegitiga + sisiMiringSegitiga;
            std::cout << "Keliling segitiga Anda adalah = " << keliling << std::endl;


            std::cout << "\n\n1. Kembali ke Menu\n";
            std::cout << "2. Keluar\n";
            std::cout << "Pilih: " << std::endl;
            std::cin >> choices;
            if (choices == 1)
                goto mulai;
            else
                return 0;
            break;

            case 2:
            std::cout << "\n\n1. Kembali ke Menu\n";
            std::cout << "2. Keluar\n";
            std::cout << "Pilih:\n" << std::endl;
            std::cin >> choices;
            if (choices == 1)
                goto mulai;
            else
                return 0;
            break;
        }

    } else if (choice==2) {
        std::cout << "\t1. Mencari luas & volume kubus\n";
        std::cout << "\t2. Mencari luas & volume bola\n";
        std::cout << "\t3. Kembali ke menu\n";
        std::cout << "Pilih bangun ruang yang ingin Anda hitung: \n" << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Perlu diingat bahwa sebuah ruang kubus memiliki panjang yang sama pada setiap rusuknya.\nInput panjang rusuk kubus:\n";
            std::cin >> sRusuk;

            luas = 6 * (sRusuk * sRusuk);
            volume = sRusuk * sRusuk * sRusuk;
            std::cout << "Luas kubus Anda adalah = " << luas << std::endl;
            std::cout << "Volume kubus Anda adalah = " << volume << std::endl;

            std::cout << "\n\n1. Kembali ke Menu\n";
            std::cout << "2. Keluar\n";
            std::cout << "Pilih: " << std::endl;
            std::cin >> choices;
            if (choices == 1)
                goto mulai;
            else
                return 0;
            break;

            case 2:
                std::cout << "\nInput jari-jari bola:\n";
            std::cin >> r;

            luas =  4 * 3.14 * (r * r);
            std::cout << "Luas Bola Anda adalah = " << luas << std::endl;

            volume = 4.3 * 3.14 * (r * r * r);
            std::cout << "Volume bola Anda adalah = " << volume << std::endl;

            std::cout << "\n\n1. Kembali ke Menu\n";
            std::cout << "2. Keluar\n";
            std::cout << "Pilih:\n" << std::endl;
            std::cin >> choices;
            if (choices == 1)
                goto mulai;
            else
                return 0;
            break;
            default:
                std::cout << "Opis yang Anda pilih tidak valid:\n";
            goto mulai;
            break;
        }
    }
}
