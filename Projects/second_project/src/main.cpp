#include <iostream>
#include "./header/methods.hpp"

int 
main() 
{
    int total_time, planet_amount, planet_char, minutes, i;

    std::cin >> total_time >> planet_amount >> planet_char;

    char planet_name[planet_char];
    Appointment * calendar[planet_amount];

    for(i = 0; i < planet_amount; i++) 
    {
        std::cin >> minutes >> planet_name;
        calendar[i] = new Appointment(planet_name, minutes, planet_char);
    }

    merge_sort(calendar, 0, planet_amount-1);

    months_counter(calendar, total_time, planet_amount);

    for(i = 0; i < planet_amount; i++) 
    {
        std::cout << calendar[i]->month << " " << calendar[i]->planet_name << std::endl;
    }

    int last_month = calendar[planet_amount-1]->month;
    for(int month = 1; month <= last_month; month++)
    {
        for(int column = planet_char-1; column >= 0; column--)
        {
            radix_sort(calendar,  month, column, planet_amount, planet_char);
        }
    }

    for(i = 0; i < planet_amount; i++) 
    {
        std::cout << calendar[i]->month << " " << calendar[i]->planet_name << std::endl;
    }

    for(i = 0; i < planet_amount; i++) 
    {
        delete calendar[i];
    }

    return 0;

}