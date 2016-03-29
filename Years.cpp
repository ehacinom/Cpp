#include <iostream>

int main()
{
    int year = 2010;
    std::cout << "The year " << ++year << " passes.\n";
    std::cout << "The year " << ++year << " passes.\n";
    std::cout << "The year " << ++year << " passes.\n";
    
    std::cout << "it's now " << year << ".";
    std::cout << " Have the Seattle Mariners won the World Series yet?\n";
    
    std::cout << "The year " << year++ << " passes.\n";
    std::cout << "The year " << year++ << " passes.\n";
    std::cout << "The year " << year++ << " passes.\n";
    std::cout << year << "\n\n";
    
    return 0;
}