#include <format>
#include <iostream>

int main() {
    std::string martabak = "S / M / L";
    std::string toping = "P / K / PK";
    std::string kotakSpesial = "Y / y / N / n";
    int harga = 0;

    std::cout << "Halo kakak! Terimakasih atas kunjungannya di Kedai Martabak Mursid :)\n";
    std::cout << "Di Kedai Martabak Mursid, kami menawarkan 3 varian martabak yang enaaakk lejat dan begiji~\nDiantaranya: \n";
    std::cout << "1. Martabak kecil (S) Rp. 15k\n";
    std::cout << "2. Martabak sedang (M) Rp. 20k\n";
    std::cout << "3. Martabak besar (L) Rp. 25k\n";
    std::cout << "Input pilihan pesanan Kakak (S, M, atau L): ";
    std::cin >> martabak;

    if (martabak == "S" || martabak == "s")
        harga = 15000;
    if (martabak == "M" || martabak == "m")
         harga = 20000;
    if (martabak == "L" || martabak == "l")
        harga = 25000;

    std::cout << "\n\nSekalian pisangnya Kak? + Rp. 5.000 :), Mau yang ini? Input (P)\n";
    std::cout << "Atau Kakak sukanya keju? + Rp. 4.000 :D Mau yang ini? Input (K)\n";
    std::cout << "Kakaknya suka dua-daunya yaaa? + Rp. 7.000 :D Mau yang Ini? input (PK)\n";
    std::cout << "Hmm.. engga deh. Input (N)\n";
    std::cout << "Input menu yang Kakak mau di bawah sini yaa (P/K/PK/N): \n";
    std::cin >> toping;

    if (toping == "P")
        harga += 5000;
    if (toping == "K")
        harga += 4000;
    if (toping == "PK")
        harga += 7000;

    std::cout << "\n\nOh iya kak, kami juga menawarkan dengan kotak spesial + Rp. 1000 :) mau yang ini? (Y/N): ";
    std::cin >> kotakSpesial;
    if (kotakSpesial =="Y" || kotakSpesial =="y")
        harga += 1000;

    std::cout << "\n\nTotal harga = " << harga << std::endl;

    /* //output ringkasan pesanan using std::format (fitur c++20)
    std::cout << "\n=== Ringkasan Pesanan Martabak Doa Ibu ===\n";
    std::string ukuranStr = (martabak == 'S' || martabak == 's') ? "Kecil" :
                            (martabak == 'M' || martabak == 'm') ? "Sedang" : "Besar";

    std::string tambahanStr = (toping == "P" || toping == "p") ? "Pisang" :
                              (toping == "K" || toping == "k") ? "Keju" :
                              (toping == "PK" || toping == "pk" || toping == "pK") ? "Pisang dan Keju" : "Tidak ada tambahan";

   std::cout << std::format("Ukuran Martabak: {}\n", ukuranStr);
   std::cout << std::format("Tambahan: {}\n", tambahanStr);
   std::cout << std::format("Kotak Spesial: {}\n", (kotakSpesial == 'Y' || kotakSpesial == 'y') ? "Ya" : "Tidak");
   std::cout << std::format("Total Bayar: Rp. {}\n", harga); */
    return 0;
}
