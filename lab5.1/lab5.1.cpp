#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

double pryklad(double a, double b, double c);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, f;

    cout << "Введіть значення 'х':"; cin >> x;
    cout << "Введіть значення 'y':"; cin >> y;
     
    f = (pryklad(x * y, x * x, y * y) - pryklad(1, x, y) * pryklad(1, x, y)) / (1 + pryklad(sqrt(x), y * y, 1));

    cout << f << endl;

    return 0;
}

double pryklad(double a, double b, double c)
{
    return a * a + b * b - c * c;
}
