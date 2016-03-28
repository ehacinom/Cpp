#include <iostream>

int main()
{
    // type def
    typedef unsigned short USHORT;
    USHORT width = 5;
    USHORT length = 10;
    
    // area
    USHORT area = width * length;
    
    std::cout << "width, length, area:\t" << width << ", " << 
        length << ", " << area << "\n";
    return 0;
}
