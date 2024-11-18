#include <iostream>

int main() {
    int hargaBarang = 0, diskon = 0, kodePromo = 0;
    std::string kode = "Y / N";
    std::cout << "Masukkan Harga Barang: \n";
    std::cin >> hargaBarang;
    std::cout << "Kode Promo? (Y/N)" << std::endl;
    std::cin >> kode;
    if (kode == "y" || kode == "Y") {
        std::cout << "Tulis kode promo\n";
        std::cin >> kodePromo;
        if (kodePromo == 123)
            diskon = hargaBarang * 50 / 100;
        if (kodePromo == 678)
            diskon = hargaBarang * 25 / 100;
        if (kodePromo == 000)
            diskon = hargaBarang * 3 / 100;
        hargaBarang = hargaBarang - diskon;
        std::cout << "Total Bayar = " << hargaBarang << std::endl;
    } else if (kode == "n" || kode == "N") {
        std::cout << "Total Bayar = " << hargaBarang << std::endl;
    }
    return 0;
}