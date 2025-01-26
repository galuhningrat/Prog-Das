#include <iostream>
#include <string>
#include <iomanip>

const int jmlMhs = 5;

std::string namaMhs[jmlMhs];
int nilaiBahasa[jmlMhs];
int nilaiMtk[jmlMhs];
bool dataTerisi = false;

void inputData() {
    std::cout << "\n=================================\n";
    std::cout << "========= EDIT NILAI MHS ========\n";
    std::cout << "=================================\n";

    for (int i = 0; i < jmlMhs; i++) {
        std::cout << "\nData Mahasiswa ke- " << (i + 1) << "\n";
        std::cout << "Nama            : ";
        std::cin >> namaMhs[i];
        std::cout << "Nilai Bahasa    : ";
        std::cin >> nilaiBahasa[i];
        std::cout << "Nilai Mtk       : ";
        std::cin >> nilaiMtk[i];
    }

    dataTerisi = true;

    std::cout << "\nMasukkan 9 untuk kembali\n";
    /* Masukan atau masukkan? Keduanya betul, tapi maknanya berbeda.
     * Masukan = masuk + an = kata benda; Masukkan = masuk + kan = kata kerja */
    int back;
    while (true) {
        std::cout << "Pilih: ";
        std::cin >> back;
        if (back == 9) return;
        else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
    }
}

void outputData() {
    std::cout << "\n=================================\n";
    std::cout << "========= DATA NILAI MHS =========\n";
    std::cout << "=================================\n";

    if (!dataTerisi) {
        std::cout << "\nData masih kosong!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";
        int back;
        while (true) {
            std::cout << "Pilih: ";
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    } else {
        for (int i = 0; i < jmlMhs; i++) {
            std::cout << i+1 << ") Nama: " << namaMhs[i]
                      << ", Nilai Bahasa: " << nilaiBahasa[i]
                      << ", Nilai MTK: " << nilaiMtk[i] << "\n";
        }
        std::cout << "Masukkan 9 untuk kembali\n";
        int back;
        while (true) {
            std::cout << "Pilih: ";
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }
}

void editNilaiMahasiswa() {
    std::cout << "\n=================================\n";
    std::cout << "========= EDIT NILAI MHS ========\n";
    std::cout << "=================================\n";

    if (!dataTerisi) {
        std::string cariNamaMhs;
        std::cout << "Masukan nama mahasiswa yang akan di edit:\n";
        std::cin >> cariNamaMhs;

        std::cout << "\nMahasiswa dengan nama " << cariNamaMhs << " tidak ditemukan!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";

        int back;
        while (true) {
            std::cout << "Pilih: ";
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }

    std::string cariNamaMhs;
    std::cout << "Masukan nama mahasiswa yang akan di edit: ";
    std::cin >> cariNamaMhs;

    bool found = false;
    for (int i = 0; i < jmlMhs; i++) {
        if (namaMhs[i] == cariNamaMhs) {
            std::cout << "Data Mahasiswa ke- " << i+1 << "\n";
            std::cout << "Nama            : " << namaMhs[i] << "\n";
            std::cout << "Edit Nilai Bahasa       : ";
            std::cin >> nilaiBahasa[i];
            std::cout << "Edit Nilai Mtk          : ";
            std::cin >> nilaiMtk[i];
            std::cout << "Berhasil disimpan!\n";
            found = true;

            std::cout << "Masukkan 9 untuk kembali\n";
            int back;
            while (true) {
                std::cout << "Pilih: ";
                std::cin >> back;
                if (back == 9) return;
                else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
            }
        }
    }

    if (!found) {
        std::cout << "\n" << cariNamaMhs << "\n";
        std::cout << "Mahasiswa dengan nama " << cariNamaMhs << " tidak ditemukan!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";
        int back;
        while (true) {
            std::cout << "Pilih: ";
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }
}

void menghitungRataRata() {
    std::cout << "\n=================================\n";
    std::cout << "====== RATA-RATA NILAI MHS ======\n";
    std::cout << "=================================\n";

    if (!dataTerisi) {
        std::string cariNamaMhs;
        std::cout << "Masukan nama mahasiswa yang akan ditampilkan rata-ratanya:\n";
        std::cin >> cariNamaMhs;

        std::cout << "\nMahasiswa dengan nama " << cariNamaMhs << " tidak ditemukan!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";

        int back;
        while (true) {
            std::cout << "Pilih: ";
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }

    std::string cariNamaMhs;
    std::cout << "Masukan nama mahasiswa yang akan ditampilkan rata-ratanya: ";
    std::cin >> cariNamaMhs;

    bool found = false;
    for (int i = 0; i < jmlMhs; i++) {
        if (namaMhs[i] == cariNamaMhs) {
            std::cout << "Data Mahasiswa ke- " << i+1 << "\n";
            std::cout << "Nama            : " << namaMhs[i] << "\n";
            std::cout << "Nilai Bahasa    : " << nilaiBahasa[i] << "\n";
            std::cout << "Nilai Mtk       : " << nilaiMtk[i] << "\n";
            int rataRata = (nilaiBahasa[i] + nilaiMtk[i]) / 2;
            std::cout << "Rata-rata       : " << rataRata << "\n";
            found = true;

            std::cout << "Masukkan 9 untuk kembali\n";
            int back;
            while (true) {
                std::cout << "Pilih: ";
                std::cin >> back;
                if (back == 9) return;
                else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
            }
        }
    }

    if (!found) {
        std::cout << "\n" << cariNamaMhs << "\n";
        std::cout << "Mahasiswa dengan nama " << cariNamaMhs << " tidak ditemukan!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";
        int back;
        while (true) {
            std::cout << "Pilih: ";
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }
}

int main() {
    int option;
    do {
        std::cout << "\n################################\n";
        std::cout << "====== APLIKASI NILAI MHS ======\n";
        std::cout << "################################\n";
        std::cout << "1) Tampilkan Data 5 Mahasiswa\n";
        std::cout << "2) Edit Semua Data Mahasiswa\n";
        std::cout << "3) Edit Nilai Mahasiswa Berdasarkan Nama\n";
        std::cout << "4) Tampilkan Rata-rata Nilai\n";
        std::cout << "9) Exit\n";
        std::cout << "Pilih Nomor: ";
        std::cin >> option;

        switch (option) {
            case 1:
                outputData();
            break;
            case 2:
                inputData();
            break;
            case 3:
                editNilaiMahasiswa();
            break;
            case 4:
                menghitungRataRata();
            break;
            case 9:
                exit(0);
            default:
                std::cout << "\nAnda typo. Silahkan seduh kopi.\n";
        }
    } while (option != 9);
    return 0;
}