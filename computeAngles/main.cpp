#include <cmath>
#include <iostream>
#include <math.h>

int main()
{
    std::cout << "Masukkan titik koordinat (x1, y1)" << std::endl;
    double x1, y1;
    std::cin >> x1 >> y1;

    std::cout << "Masukkan titik koordinat (x2, y2)" << std::endl;
    double x2, y2;
    std::cin >> x1 >> y1;

    std::cout << "Masukkan titik koordinat (x1, y1)" << std::endl;
    double x3, y3;
    std::cin >> x3 >> y3;

    double a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double b = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

    double A = acos((a * a - b * b - c * c) / (-2 * b * c));
    double B = acos((b * b - a * a - c * c) / (-2 * a * c));
    double C = acos((c * c - b * b - a * a) / (-2 * a * b));

    const double PI = 3.141592653589793;
    std::cout << "Ketiga titik a, b, dan c dengan nilai angles-nya adalah:\n"
                 "A = " << A * 180 / PI << "\nB = " << B * 180 / PI << "\nC = " << C * 180 / PI << std::endl;
    return 0;

    // makasihh y Allah telah memampukan hamba :)
}
