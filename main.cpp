#include <iostream>
#include <cmath>
int main()
{
    float x, y, C;
    std::cin >> x;
    std::cin >> y;
    float pi = 3.14159265359;
    float R = (cos(pi * x) / sin(pi * x)) - (1.0 / cos(y));
    float S = (sin(x) / cos(x)) - log(abs(pow(x, 3) + pow(y, 3)));
    std::cout << R << " " << S << std::endl;
    C = std::max(R, S);
    std::cout << C;
}
