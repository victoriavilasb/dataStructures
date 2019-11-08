#include <iostream>
#include "./header/methods.hpp"

int 
main() 
{
    int total_time, planet_amount, planet_char, minutes, months_count, sum, i, j;

    std::cin >> total_time >> planet_amount >> planet_char;

    // char planets[planet_amount][planet_char];
    char planet_name[planet_char];
    Appointment * calendar[planet_amount];
    // int visit_months[planet_amount];

    for(i = 0; i < planet_amount; i++) 
    {
        std::cin >> minutes >> planet_name;
        calendar[i] = new Appointment(planet_name, minutes, planet_char);
    }

    for(i = 0; i < planet_amount; i++) 
    {
        std::cout << calendar[i]->duration << " " << calendar[i]->planet_name << " ";
    }
    std::cout << std::endl;

    merge_sort(calendar, 0, planet_amount-1);

    // months_count = 1;
    // sum = 0;
    // for(int i = 0; i < planet_amount; i++)
    // {
    //     visit_months[i] = months_count;
    //     if (sum < total_time)
    //     {
    //         sum += visits_duration[i];
    //     }
    //     else
    //     {
    //         sum = 0;
    //         months_count++;
    //     }
        
    // }

    for(i = 0; i < planet_amount; i++) 
    {
        std::cout << calendar[i]->duration << " " << calendar[i]->planet_name << " ";
    }
    std::cout << std::endl;

    // return 0;
}