#include <iostream>
#include "./header/methods.hpp"

#define MAXTAM 150001

using namespace std;
int 
main() 
{
    int total_time, planet_amount, planet_char, minutes, i;

    std::cin >> total_time >> planet_amount >> planet_char;

    char planet_name[planet_char];
    Appointment * calendar = new Appointment[MAXTAM];

    for(i = 0; i < planet_amount; i++) 
    {
        std::cin >> minutes >> planet_name;
        calendar[i].planet_name = planet_name;
        calendar[i].duration = minutes;
    }

    merge_sort(calendar, 0, planet_amount-1);

    int months_init[planet_amount];
    months_counter(calendar, total_time, planet_amount, months_init);
    
    int last_month = calendar[planet_amount-1].month;

    for(int month = 1; month <= last_month; month++)
    {
        for(int column = planet_char-1; column >= 0; column--)
        {
            radix_sort(calendar, months_init, month, column, planet_amount, planet_char);
        }
    }

    for(i = 0; i < planet_amount; i++) 
    {
        std::cout << calendar[i].month << " " << calendar[i].planet_name << " " << calendar[i].duration << std::endl;
    }
    std::cout << std::endl;

    delete [] calendar;

    return 0;
}