#include <iostream>

int main()
{
    char grade;
    std::cout << "Enter your letter grade (ABCDF): ";
    std::cin >> grade;
    
    switch (grade)
    {
        case 'A':
            std::cout << "A!\n";
            break;
        case 'B':
            std::cout << "B!\n";
            break;
        case 'C':
            std::cout << "C!\n";
            break;
        case 'D':
            std::cout << "D!\n";
            break;
        case 'F':
            std::cout << "F!\n";
            break;
        default:
            std::cout << "Not a grade./n";
            break;
    }
    
    return 0;
}