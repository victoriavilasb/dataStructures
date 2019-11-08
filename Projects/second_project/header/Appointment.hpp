#include <iostream>

class Appointment {
    public:
        std::string planet_name;
        int duration;
        Appointment(char[], int, int); 
        ~Appointment() {};
};

Appointment::Appointment(char a[], int b, int length)
{
    planet_name = new char[length];
    planet_name = a;
    duration = b;
}

