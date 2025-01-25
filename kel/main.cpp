#include <iostream>
int main () {
    int pilih;
    int jumlah = 10;
    int nilai[jumlah] = {};
    std::string nama[jumlah] = {};

    std::cout << "=================================="<< std::endl;
    std::cout << "=======DATA NILAI MAHASISWA======="<< std::endl;
    std::cout << "=================================="<< std::endl;
    do {
        std::cout << "1) Tampilkan 10 Data Mahasiswa"<< std::endl;
        std::cout << "2) Edit seluru Data Mahasiswa"<< std::endl;
        std::cout << "0) Exit"<< std::endl;
        std::cin>>pilih;
        if (pilih == 1) {
            for (int i = 0; i < jumlah; i++) {
                std::cout << i + 1 << ") Nama : " << nama[i] << ", Nilai : " << nilai[i] << std::endl;
            }
            std::cout << "Pilih 0 untuk kembali"<< std::endl;
            std::cin >> pilih;
        } else if (pilih == 2) {
            for (int i = 0; i < jumlah ; i++) {
                std::cout << "Data Mahasiswa Ke-" << i + 1 << std::endl;
                std::cout << "Nama : ";
                std::cin >> nama[i];
                std::cout << "Nilai : ";
                std::cin >> nilai[i];
            }
            std::cout << "Pilih 0 untuk kembali"<< std::endl;
            std::cin >> pilih;
        } else {
            std::cout << "ANDA KELUAR DARI APLIKASI ";
            return 1;
        }
    } while (pilih < 3);
}