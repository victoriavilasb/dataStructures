#include <iostream>
#include "./header/methods.hpp"

int 
main() 
{
    int total_time, planet_amount, planet_char, minutes, i;

    std::cin >> total_time >> planet_amount >> planet_char;

    char planet_name[planet_char];
    Appointment * calendar[planet_amount];
    Appointment * ordered_calendar[planet_amount];

    // fill calendar with durations and planets
    for(i = 0; i < planet_amount; i++) 
    {
        std::cin >> minutes >> planet_name;
        calendar[i] = new Appointment(planet_name, minutes, planet_char);
    }

    // ordered calendar by duration
    merge_sort(calendar, 0, planet_amount-1);

    // fill calendar object with visit months
    months_counter(calendar, total_time, planet_amount);

    // get last month
    int last_month = calendar[planet_amount-1]->month;
    for(int month = 1; month <= last_month; month++)
    {
        for(int column = planet_char; column > 0; column--)
        {
            radix_sort(calendar, ordered_calendar, month, column-1, planet_amount, planet_char);
        }
    }

    for(i = 0; i < planet_amount; i++) 
    {
        std::cout << calendar[i]->month << " " << calendar[i]->planet_name << std::endl;
    }
    std::cout << std::endl;

    return 0;
}