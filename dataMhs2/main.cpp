#include <iostream>
#include <string>

const int jmlMhs = 5;

std::string namaMhs[5];
int nilai[5][2];
bool dataTerisi = false;

void inputData() {
    std::cout << "\n=================================\n";
    std::cout << "========= EDIT NILAI MHS ========\n";
    std::cout << "=================================\n";

    for (int i = 0; i < jmlMhs; i++) {
        std::cout << "\nData Mahasiswa ke-" << (i + 1) << "\n";
        std::cout << "Nama            :";
        std::cin >> namaMhs[i];
        std::cout << "Nilai Bahasa    :";
        std::cin >> nilai[i][0];
        std::cout << "Nilai Mtk       :";
        std::cin >> nilai[i][1];
    }

    dataTerisi = true;

    std::cout << "\nMasukkan 9 untuk kembali\n";
    /* Masukan atau masukkan? Keduanya betul, tapi maknanya berbeda.
     * Masukan = masuk + an = kata benda; Masukkan = masuk + kan = kata kerja */
    int back;
    while (true) {
        std::cin >> back;
        if (back == 9) return;
        else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
    }
}

void outputData() {
    std::cout << "\n=================================\n";
    std::cout << "========= DATA NILAI MHS ========\n";
    std::cout << "=================================\n";

    if (!dataTerisi) {
        std::cout << "\nData masih kosong!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";
        int back;
        while (true) {
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    } else {
        for (int i = 0; i < jmlMhs; i++) {
            std::cout << i+1 << ") Nama: " << namaMhs[i]
                      << ", Nilai Bahasa: " << nilai[i][0]
                      << ", Nilai MTK: " << nilai[i][1] << "\n";
        }
        std::cout << "\nMasukkan 9 untuk kembali\n";
        int back;
        while (true) {
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
        std::cout << "Masukkan nama mahasiswa yang akan di edit:\n";
        std::cin >> cariNamaMhs;

        std::cout << "\nMahasiswa dengan nama " << cariNamaMhs << " tidak ditemukan!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";

        int back;
        while (true) {
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }

    std::string cariNamaMhs;
    std::cout << "Masukkan nama mahasiswa yang akan di edit:\n";
    std::cin >> cariNamaMhs;

    bool found = false;
    for (int i = 0; i < jmlMhs; i++) {
        if (namaMhs[i] == cariNamaMhs) {
            std::cout << "\nData Mahasiswa ke-" << i+1 << "\n";
            std::cout << "Nama                  :" << namaMhs[i] << "\n";
            std::cout << "Edit Nilai Bahasa     :";
            std::cin >> nilai[i][0];
            std::cout << "Edit Nilai Mtk        :";
            std::cin >> nilai[i][1];
            std::cout << "\nBerhasil disimpan!\n\n";
            found = true;

            std::cout << "Masukkan 9 untuk kembali\n";
            int back;
            while (true) {
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
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }
}

void menghitungRataRata(const std::string& cariNamaMhs) {
    std::cout << "\n=================================\n";
    std::cout << "====== RATA-RATA NILAI MHS ======\n";
    std::cout << "=================================\n";

    if (!dataTerisi) {
        std::cout << "\nMahasiswa dengan nama " << cariNamaMhs << " tidak ditemukan!\n\n";
        std::cout << "Masukkan 9 untuk kembali\n";

        int back;
        while (true) {
            std::cin >> back;
            if (back == 9) return;
            else std::cout << "Invalid input. Oh come on, you haven't even stepped foot on the grass, Dude.\n";
        }
    }

    bool found = false;
    for (int i = 0; i < jmlMhs; i++) {
        if (namaMhs[i] == cariNamaMhs) {
            std::cout << "\nData Mahasiswa ke-" << i+1 << "\n";
            std::cout << "Nama            : " << namaMhs[i] << "\n";
            std::cout << "Nilai Bahasa    : " << nilai[i][0] << "\n";
            std::cout << "Nilai Mtk       : " << nilai[i][1] << "\n";
            int rataRata = (nilai[i][0] + nilai[i][1]) / 2;
            std::cout << "Rata-rata       : " << rataRata << "\n";
            found = true;

            std::cout << "\nMasukkan 9 untuk kembali\n";
            int back;
            while (true) {
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
        std::cout << "9) Exit\n\n";
        std::cout << "Pilih Nomor:";
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
            case 4: {
                std::string cariNamaMhs;
                std::cout << "Masukkan nama mahasiswa yang akan ditampilkan rata-ratanya:\n";
                std::cin >> cariNamaMhs;
                menghitungRataRata(cariNamaMhs);
            }
            break;
            case 9:
                exit(0);
            default:
                std::cout << "\nAnda typo. Silahkan seduh kopi.\n";
        }
    } while (option != 9);
    return 0;
}