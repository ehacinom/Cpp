#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter a grade (1-100): ";
    std::cin >> grade;
    
    if (grade >= 70)
    {
        if (grade >= 90)
        {
            std::cout << "A\n\n";
            return 0;
        }
        if (grade >= 80)
        {
            std::cout << "B\n\n";
            return 0;
        }
        std::cout << "C\n\n";
        return 0;
    }
    else
        std::cout << "Fail\n\n";
    return 0;
}