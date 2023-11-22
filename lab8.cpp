#include <iostream> 
#include "math.h" 

//:))))))//

int main()
{
    int F;
    float a, b, c, x;
    std::cout << "Enter number a: ";
    std::cin >> a;
    std::cout << "Enter number b: ";
    std::cin >> b;
    std::cout << "Enter number c: ";
    std::cin >> c;
    std::cout << "Enter number x: ";
    std::cin >> x;
    if (c < 0 && a != 0) {
        F = std::pow(-a * x, 3) - b / c;
    }
    else if (c > 0 && a == 0) {
        F = x - std::pow(a, 3) / -c;
    }
    else {
        F = a * x + 5 * b;
    }
    std::cout << F;
    return 0;
}