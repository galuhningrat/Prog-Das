#include <iostream>

void tambahKali(int tambah, int kali, int angka, int pengulanganOperasi) {
    std::cout << "Berapa kali Anda ingin melakukan pengulangan operasi?: " << std::endl;
    std::cin >> pengulanganOperasi;

    for (int i = 1; i <= pengulanganOperasi; i++) {
        std::cout << "Masukkan angka ke- " << i << std::endl;
        std::cin >> angka;

        tambah += angka;
        kali *= angka;
    }
    std::cout << "Total Jumlah = " << tambah << std::endl;
    std::cout << "Total Kali = " << kali << std::endl;
}

int main() {
    int tambah = 0, kali = 1, angka = 0, pengulanganOperasi = 0;
    tambahKali(tambah, kali, angka, pengulanganOperasi);

    return 0;
}
