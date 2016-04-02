#include <iostream>

class Tricycle
{
public:
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
private:
    int speed;
};

int Tricycle::getSpeed()
{
    return speed;
}

void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
        speed = newSpeed;
}

void Tricycle::pedal()
{
    setSpeed(speed + 1);
    std::cout << "\nPedaling; tricycle speed " << speed << " mph.\n";
}

void Tricycle::brake()
{
    setSpeed(speed - 1);
    std::cout << "\nBreaking: tricycle speed " << speed << " mph.\n";
}

int main()
{
    Tricycle wichita;
    wichita.setSpeed(0);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0;
}