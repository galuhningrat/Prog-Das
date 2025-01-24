/* latihan:
* 1. buat program yang membaca file teks dan menghitung jumlah kata di dalamnya.
 * 2. dari program nomor 1 buat fungsi untuk menyalin isi file ke file lain. */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int hitungKataDalamFile(const std::string& namaFile) {
    std::ifstream inputFile(namaFile);
    if (!inputFile) {
        std::cerr << "File tidak dapat dibuka!\n";
        return -1;
    }

    std::string baris;
    int jumlahKata = 0;

    while (std::getline(inputFile, baris)) {
        std::istringstream stream(baris);
        std::string kata;

        while (stream >> kata) {
            jumlahKata++;
        }
    }

    inputFile.close();
    return jumlahKata;
}

void salinFile(const std::string& sumber, const std::string& tujuan) {
    std::ifstream inputFile(sumber);
    if (!inputFile) {
        std::cerr << "File tidak dapat dibuka!\n";
        return;
    }

    std::ofstream outputFile(tujuan);
    if (!outputFile) {
        std::cerr << "File tidak dapat dibuka!\n";
        return;
    }

    std::string baris;
    while (std::getline(inputFile, baris)) {
        outputFile << baris << "\n";
    }

    std::cout << "Isi file telah berhasil disalin ke " << tujuan << "\n";

    inputFile.close();
    outputFile.close();
}

int main() {
    std::string namaFile = "data.txt";
    int jumlahKata = hitungKataDalamFile(namaFile);

    if (jumlahKata != -1) {
        std::cout << "Jumlah kata dalam file: " << jumlahKata << std::endl;
    }

    std::string sumber = "data.txt";
    std::string tujuan = "dataSalinan.txt";

    salinFile(sumber, tujuan);

    return 0;
}

