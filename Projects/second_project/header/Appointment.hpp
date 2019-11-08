#include <iostream>

class Appointment {
    public:
        std::string planet_name;
        int duration;
        int month;
        Appointment(char[], int, int); 
        ~Appointment() {};
};

Appointment::Appointment(char a[], int b, int length)
{
    planet_name = new char[length];
    month = 0;
    planet_name = a;
    duration = b;
}

