#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;

    double z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25*pow(sin(2*x), 2) - 1;
    double z2 = sin(y + x) * sin(y - x);
    cout << "z1 = " << z1 << "\t" << "z2 = " << z2 << endl;

    system("pause");
}