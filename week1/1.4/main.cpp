#include <iostream>

int main()
{
    std::cout << "this program calculates the sum of 3 numbers" << std::endl;
    int x, y, z, result;
    
    std::cout << "enter number 1: ";
    std::cin >> x;
    std::cout << "enter number 2: ";
    std::cin >> y;
    std::cout << "enter number 3: ";
    std::cin >> z;
    result = x + y + z;

    std::cout << "the product is " << result << std::endl;

    return 0;
}
