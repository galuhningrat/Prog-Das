#include <iostream>

int main()
{
    std::string penyakit = "batuk / Batuk / BATUK / flu / Flu / FLU / diare / Diare / DIARE";
    int umur;

    std::cout << "\t\t===================\n";
    std::cout << "\t\tPROGRAM OBAT HERBAL\n";
    std::cout << "\t\t===================\n";
    std::cout << "1. Batuk\n";
    std::cout << "2. Flu\n";
    std::cout << "3. Diare\n";
    std::cout << "Masukkan nama penyakit Anda kemudian kami akan memberikan resep obat herbalnya kepada Anda:\n";
    std::cin >> penyakit;
    std::cout << "Masukkan usia Anda:\n";
    std::cin >> umur;
    if (penyakit == "batuk" || penyakit == "Batuk" || penyakit == "BATUK") {
        if (umur > 18)
            std::cout << "Resep obat herbal; Jeruk nipis dan kecap 3/1." << std::endl;
        if (umur < 18)
            std::cout << "Resep obat herbal; Jeruk nipis dan kecap 1/1." << std::endl;
    } else if (penyakit == "flu" || penyakit == "Flu" || penyakit == "FLU") {
        if (umur < 15)
            std::cout << "Resep obat herbal; Konsumsi makanan yang mengandung vit. C." << std::endl;
        if (umur > 15 && umur < 20)
            std::cout << "Resep obat herbal; Makan vit. C dan minum air hangat." << std::endl;
        if (umur > 20)
            std::cout << "Resep obat herbal; Makan vit. C, minum air hangat, dan mandi air hangat." << std::endl;
    } else if (penyakit == "diare" || penyakit == "Diare" || penyakit == "Diare") {
        if (umur < 13)
            std::cout << "Resep obat herbal; Konsumsi minum air jahe." << std::endl;
        if (umur > 13 && umur < 20)
            std::cout << "Resep obat herbal; Konsumsi minum daun jambu." << std::endl;
        if (umur > 20)
            std::cout << "Resep obat herbal; Konsumsi minum kunyit atau lada putih." << std::endl;
    }
    return 0;
}
