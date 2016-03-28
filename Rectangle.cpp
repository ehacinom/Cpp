#include <iostream>

int main()
{
    // set up w, l
    unsigned short width = 5, length;
    length = 10;
    
    // area
    unsigned short area = width * length;
    
    std::cout << "width, length, area:\t" << width << ", " << 
        length << ", " << area << "\n";
    return 0;
}
