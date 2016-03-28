#include<iostream>

int add(int x, int y)
{
    // addition
    std::cout << "Running calculator...\n";
    return (x+y);
}

int main()
{
    std::cout << "867 + 5309 = " << add(867, 5309) << "\n";
    return 0;
}