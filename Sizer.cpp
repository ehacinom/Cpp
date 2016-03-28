#include <iostream>

int main()
{
    std::cout << "int size \t" << sizeof(int) << " bytes\n";
    std::cout << "short int \t" << sizeof(short) << " bytes\n";
    std::cout << "long int \t" << sizeof(long) << " bytes\n";
    std::cout << "char \t" << sizeof(char) << " bytes\n";
    std::cout << "float \t" << sizeof(float) << " bytes\n";
    std::cout << "double \t" << sizeof(double) << " bytes\n";
    std::cout << "long long int \t" << sizeof(long long int) << " bytes\n";
    
    return 0;
}