#include <iostream>

int main()
{
    int counter = 0;
    int multiples = 0;
    
    while (multiples < 10)
    {
        counter++;
        if (counter % 15 != 0)
            continue;
        std::cout << counter << " ";
        multiples++;
    }
    
    std::cout << "\n";
    return 0;
}