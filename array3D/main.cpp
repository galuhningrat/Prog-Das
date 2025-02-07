#include <iostream>

int jmlKelas = 10;
int jmlMhsPerKelas = 20;
int jmlPelajaran = 7;
std::string nama[10][20];
int nilai[10][20][7];
int k, m, p;

int main() {
    for(k = 0; k <= jmlKelas-1; k++) {
        std::cout << "Data Kelas ke " << k+1 << std::endl;
        for(m = 0; m <= jmlMhsPerKelas-1; m++) {
        std::cout << "Masukkkan nama mhs ke " << (m+1) << std::endl;
        std::cin >> nama[k][m];
            for(p = 0; p <= jmlPelajaran-1; p++) {
            std::cout << "Masukkan Nilai ke " << (p+1) << std::endl;
            std::cin >> nilai[k][m][p];
            }
        }
    }

}