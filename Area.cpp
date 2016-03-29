#include <iostream>

int findArea(int length, int width); // function prototype

int main()
{
    int length;
    int width;
    int area;
    
    std::cout << "\nHow wide is your yard? ";
    std::cin >> width;
    std::cout << "\nHow long is your yard? ";
    std::cin >> length;
    
    area = findArea(length, width);
    
    std::cout << "\nYour yard is " << area << " square feet.\n\n";
    return 0;
}

int findArea(int l, int w)
{
    return l * w;
}