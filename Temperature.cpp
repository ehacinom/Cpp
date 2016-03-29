#include <iostream>

float convert(float);

int main()
{
    float fahrenheit;
    float celsius;
    
    std::cout << "Temp (F): ";
    std::cin >> fahrenheit;
    celsius = convert(fahrenheit);
    std::cout <<"Temp (C): " << celsius << "\n";
    return 0;
}

float convert(float fahrenheit)
{
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}