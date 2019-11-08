#include <iostream>
#include "./header/methods.hpp"

int 
main() 
{
    int total_time, planet_amount, planet_char, minutes, months_count, sum, i, j, max_number;

    std::cin >> total_time >> planet_amount >> planet_char;

    char planet_name[planet_char];
    Appointment * calendar[planet_amount];

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

    // order by planet names
    max_number = get_max(calendar, planet_amount);

    for(i = 0; i < planet_amount; i++) 
    {
        std::cout << calendar[i]->month << " " << calendar[i]->planet_name << std::endl;
    }
    std::cout << std::endl;

    return 0;
}