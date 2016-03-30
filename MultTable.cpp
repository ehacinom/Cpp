#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    std::cout << "\nFirst 10 multiples of " << number << "\n";
    for (int i = 1; i < 11; i++)
        std::cout << number * i << " ";
    std::cout << "\n";
    return 0;
}