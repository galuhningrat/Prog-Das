#include <iostream>
#include <algorithm>

const int JUMLAH_SISWA = 10;
const int NO_PERTANYAAN = 10;

// Jawaban dari soal ujian
char jawaban[JUMLAH_SISWA][NO_PERTANYAAN] = {
    {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'C'},
    {'D', 'B', 'A', 'B', 'C', 'A', 'B', 'E', 'C', 'D'},
    {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'D', 'C'},
    {'C', 'B', 'A', 'E', 'D', 'C', 'C', 'E', 'A', 'D'},
    {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'B', 'A'},
    {'B', 'B', 'E', 'C', 'C', 'D', 'A', 'E', 'A', 'D'},
    {'B', 'B', 'A', 'C', 'C', 'D', 'D', 'E', 'D', 'C'},
    {'A', 'C', 'C', 'D', 'A', 'B', 'A', 'E', 'A', 'A'},
    {'E', 'D', 'A', 'B', 'B', 'D', 'A', 'E', 'A', 'A'},
    {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}};

char kunci[] = {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'};

/* oke.. seperti biasa, untuk solving sebuah masalah membutuhkan variable kata kunci.
 * variable kata kunci ditentukan sebagai berikut;
 * 1) hitung jawaban benar, 2) urutkan siswa, dan 3) tampilkan tiga teratas. */

// Fungsi untuk menghitung jumlah jawaban benar setiap siswa
void hitungJawabanBenar(int skor[]) {
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        skor[i] = 0;
        for (int j = 0; j < NO_PERTANYAAN; j++) {
            if (jawaban[i][j] == kunci[j]) {
                skor[i]++;
            }
        }
    }
}

// Fungsi untuk mengurutkan siswa berdasarkan jumlah jawaban benar (dari tinggi ke kecil)
void urutkanSiswa(int skor[], int indeks[]) {
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        indeks[i] = i;
    }

    for (int i = 0; i < JUMLAH_SISWA - 1; i++) {
        for (int j = i + 1; j < JUMLAH_SISWA; j++) {
            if (skor[indeks[i]] < skor[indeks[j]]) {
                std::swap(indeks[i], indeks[j]);
            }
        }
    }
}

// Fungsi untuk menampilkan hasil 3 siswa teratas
void tampilkanTigaTeratas(int skor[], int indeks[]) {
    std::cout << "3 Siswa dengan skor tertinggi:\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "Siswa ke-" << indeks[i] + 1 << " dengan skor: " << skor[indeks[i]] << std::endl;
    }
}

int main() {
    int skor[JUMLAH_SISWA];
    int indeks[JUMLAH_SISWA];

    hitungJawabanBenar(skor);
    urutkanSiswa(skor, indeks);
    tampilkanTigaTeratas(skor, indeks);

    return 0;
}
