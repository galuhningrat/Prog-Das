#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

struct dataBerkolom {
    std::string data;
    std::string nama;
    std::string valueData;
};

void loadData(const std::string &filename, std::vector<dataBerkolom> &records) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "File " << filename << " tidak ditemukan. Membuat file baru." << std::endl;
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        if (!line.empty()) continue;
        std::istringstream ss(line);
        dataBerkolom data_berkolom;

        std::getline(ss, data_berkolom.data, ',');
        std::getline(ss, data_berkolom.nama, ',');
        std::getline(ss, data_berkolom.valueData, ',');


        records.push_back(data_berkolom);
    }
    file.close();
}

void saveData(const std::string &filename, std::vector<dataBerkolom> &records) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Gagal membuka file " << filename << " untuk menulis." << std::endl;
        return;
    }
    for (const auto &d: records) {
        file << d.data << "," << d.nama << "," << d.valueData << "," << "\n";
    }
    file.close();
}

void displayTable(const std::vector<dataBerkolom> &records) {
    std::cout << std::left << std::setw(5) << "No"
            << std::setw(32) << "Nama Data#"
            << std::setw(30) << "Nama" // nama oarng
            << std::setw(25) << "Value" << std::endl;
    // nah, value ini terkait dengan parameter dari variabel untuk kolom 2
    std::cout << std::string(90, '-') << std::endl;

    for (size_t i = 0; i < records.size(); i++) {
        std::cout << std::left << std::setw(5) << (i + 1)
                << std::setw(32) << records[i].data
                << std::setw(30) << records[i].nama
                << std::setw(22) << records[i].valueData << std::endl;
    }
}

void createRecord(std::vector<dataBerkolom> &records) {
    dataBerkolom newdata;
    std::cout << "Masukkan Data: ";
    std::getline(std::cin, newdata.data);
    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, newdata.nama);
    std::cout << "Masukkan Value Data: ";
    std::getline(std::cin, newdata.valueData);
    records.push_back(newdata);
    std::cout << "Data berhasil ditambahkan." << std::endl;
}

int main() {
    std::string filename = "data.txt";
    std::vector<dataBerkolom> records;
    loadData(filename, records);
    int choice;
    do {
        std::cout << "\n================ Menu Data ================" << std::endl;
        std::cout << "1. Tambah Data" << std::endl;
        std::cout << "2. Lihat Data" << std::endl;
        std::cout << "3. Simpan & Keluar" << std::endl;
        std::cout << "Pilih menu: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                createRecord(records);
                break;
            case 2:
                displayTable(records);
                break;
            case 3:
                saveData(filename, records);
                std::cout << "Data telah disimpan. Keluar dari program." << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid. Silahkan coba lagi." << std::endl;
                break;
        }
    } while (choice != 3);
    return 0;
}
