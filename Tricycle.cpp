#include "Tricycle.hpp"

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

// set speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
        speed = newSpeed;
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