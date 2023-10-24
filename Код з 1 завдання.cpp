#include <iostream> 
#include "math.h" 
#include "windows.h" 
using namespace std;

int main()
{
    int F;
    float a, b, c, x;
    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "Enter number c: ";
    cin >> c;
    cout << "Enter number x: ";
    cin >> x;
    if (c < 0 && a != 0) {
        F = pow(-a * x, 3) - b / c;
    }
    else if (c > 0 && a == 0) {
        F = x - pow(a, 3) / -c;
    }
    else {
        F = a * x + 5 * b;
    }
    cout << F;
    return 0;
}
