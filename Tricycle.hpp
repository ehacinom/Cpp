#include <iostream>

class Tricycle
{
public:
    Tricycle(int initialAge);
    ~Tricycle();
    int getSpeed() const { return speed; }
    void setSpeed(int speed);
    void pedal() 
    {
        setSpeed(speed + 1);
        std::cout << "\nPedaling; tricycle speed " << getSpeed() << " mph.\n";
    }
    void brake()
    {
        setSpeed(speed - 1);
        std::cout << "\nBreaking: tricycle speed " << speed << " mph.\n";
    }
private:
    int speed;
};