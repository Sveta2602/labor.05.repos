#include <iostream>
#include <cmath>
using namespace std;

double f(double);

int main()
{
    setlocale(LC_ALL, "RUS");
    double x;
    double y;
    cout << "¬ведите X > ";
    cin >> x;
    cout << "¬ведите Y > ";
    cin >> y;
    cout << (f(3) + f(x + 1) + 1) / 1 - pow(f(y + 1), 2);
    return 0;
}

double f(double a)
{
    return (a * a + 1) / (pow(sin(a), 2) + 1);
}