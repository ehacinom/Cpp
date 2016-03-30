#include <iostream>

int main()
{
    int row, col;
    char c;
    
    std::cout << "Rows? ";
    std::cin >> row;
    std::cout << "Columns? ";
    std::cin >> col;
    std::cout << "Char? ";
    std::cin >> c;
    
    std::cout << "\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            std::cout << c;
        std::cout << "\n";
    }
    
    return 0;
}