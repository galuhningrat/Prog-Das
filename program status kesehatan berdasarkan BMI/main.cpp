/* membuat program status kesehatan berdasarkan BMI
 * algoritma:
 * input:
 * meminta user utk memasukkan tinggi_badan (cm)
 * meminta user utk memasukkan berat badan (kg)
 * output:
 * nilai BMI yang telah dihitung
 * kategori status kesehatan nerdasarkan nilai BMI
 *
 * BMI < 18.5: Berat badan kurang
 * 18.5 ≤ BMI < 24.9: Berat badan normal
 * 25 ≤ BMI < 29.9: Berat badan berlebih (overweight)
 * BMI ≥ 30: Obesitas
 */
#include <iostream>


int main() {

    // menginput tinggi badan
    std::cout << "Tinggi badan dalam cm: " << std::endl;
    double tb;
    std::cin >> tb;

    // menginput berat badan
    std::cout << "Berat badan dalam kg: " << std::endl;
    double bb;
    std::cin >> bb;

    // mengonversi cm ke satuan meter
    tb = tb * 1 / 100;
    std::cout << "Tinggi badan: " << tb << "m" << std::endl;
    std::cout << "Berat badan: " << bb << "kg" << std::endl;

    // rumus BMI
    const double bmi = bb / (tb * tb);
    std::cout << "Nilai BMI adalah "<< bmi << std::endl;

    // kategori status kesehatan
    if (bmi < 18.5) {
        std::cout << "Berat badan kurang " << std::endl;
    } else if (18.5 <= bmi < 24.9) {
        std::cout << "Berat badan normal " << std::endl;
    } else if (25 <= bmi < 29.9) {
        std::cout << "Berat badan berlebih (overweight) " << std::endl;
    } else if (bmi >= 30) {
        std::cout << "Obesitas " << std::endl;
    }

    return 0;
}