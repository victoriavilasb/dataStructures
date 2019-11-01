#include <iostream>
#include "methods.hpp"

int 
main() 
{
    int total_time, planet_amount, planet_char, minutes, i, j;

    std::cin >> total_time >> planet_amount >> planet_char;

    char planets[planet_amount][planet_char];
    char planet_name[planet_char];
    int visits_duration[planet_amount];
    int visit_days[planet_amount];
    int * sorted;

    for(i = 0; i < planet_amount; i++) 
    {
        std::cin >> minutes >> planet_name;
        visits_duration[i] = minutes;
        for(j = 0; j < planet_char; j++)
        {
            planets[i][j] = planet_name[j];
        }
    }

    sorted = counting_sort(visits_duration, planet_amount);
    for(i = 0; i < planet_amount; ++i) 
    {
        std::cout << *(sorted+i) << " ";
    }
    std::cout << std::endl;

    delete sorted;

    return 0;
}