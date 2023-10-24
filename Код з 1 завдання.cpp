#include <iostream> 
#include "math.h" 
#include "windows.h" 
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int F;
    float a, b, c, x;
    cout << "¬вед≥ть число a: ";
    cin >> a;
    cout << "¬вед≥ть число b: ";
    cin >> b;
    cout << "¬вед≥ть число c: ";
    cin >> c;
    cout << "¬вед≥ть число x: ";
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
