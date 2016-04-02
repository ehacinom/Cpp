#include <iostream>

class Tricycle
{
public:
    Tricycle(int initialAge);
    ~Tricycle();
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
private:
    int speed;
};

// constructor
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

// destructor
Tricycle::~Tricycle()
{
    // do nothing
}

// get speed
int Tricycle::getSpeed()
{
    return speed;
}

// set speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
        speed = newSpeed;
}

void Tricycle::pedal()
{
    setSpeed(speed + 1);
    std::cout << "\nPedaling, speed " << getSpeed() << " mph.";
}

void Tricycle::brake()
{
    setSpeed(speed - 1);
    std::cout << "Brake, speed " << getSpeed() << " mph.\n";
}

int main()
{
    Tricycle wichita(5);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0;
}

