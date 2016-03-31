#include <iostream>

int main()
{
    char name[50];
    char quest[80];
    
    std::cout << "Name: ";
    std::cin.getline(name, 49);
    std::cout << "Quest: ";
    std::cin.getline(quest, 79);
    
    std::cout << "\n" << name << " is on " << quest << "\n";
    
    return 0;
}