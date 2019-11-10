#include <iostream>
#include "./Appointment.hpp"
#include "helpers.hpp"

void
counting_sort(Appointment * to_sort[], Appointment * sorted[], int month, int column, int max, int cont_first, int cont_last)
{
    // int i, j, count;
    // int converted;
    // int size = cont_last - cont_first + 1;
    // Appointment * objs[max+1][size];

    // for (i = 0; i < max+1; i++)
    // {
    //     for (j = 0; j < size; j++)
    //     {
    //         objs[i][j] = new Appointment();
    //     }
    // }



    // for (i = cont_first; i <= cont_last; i++)
    // {
    //     j = 0;
    //     converted = to_sort[i]->planet_name[column];
    //     //std::cout << i << " " << to_sort[i]->planet_name << std::endl;
    //     while (objs[converted][j]->month)
    //     {
    //         j++;
    //     }
    //     objs[converted][j] = to_sort[i];     

    // }


    // count = 0;
    // for (i = 0; i < max+1; i++)
    // {
    //     j = 0;

    //     while(objs[i][j]->month) 
    //     {
    //         to_sort[cont_first + count] = objs[i][j];
    //         j++;
    //         count++;
    //     }      
    // }
    // std::cout << "teste"<< std::endl;

}

void
merge(Appointment * to_sort[], int left, int middle, int right)
{
    int i, j, k;
    int length_left = middle - left + 1, length_right = right - middle;
    Appointment * LEFT[length_left], * RIGHT[length_right];

    for(i = 0; i < length_left; i++)
    {
        LEFT[i] = to_sort[left + i];
    }
    for(j = 0; j < length_right; j++)
    {
        RIGHT[j] = to_sort[middle + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < length_left && j < length_right)
    {
        if (LEFT[i]->duration <= RIGHT[j]->duration)
        {
            to_sort[k] = LEFT[i];
            i++;
        }
        else
        {
            to_sort[k] = RIGHT[j];
            j++;
        }
        k++;
    }

    while (i < length_left)
    {
        to_sort[k] = LEFT[i];
        i++;
        k++;
    }

    while (j < length_right)
    {
        to_sort[k] = RIGHT[j];
        j++;
        k++;
    }   
}

void 
merge_sort(Appointment * to_sort[], int left, int right)
{
    int middle;
    if(left < right)
    {
        middle = (left + right) / 2;
        merge_sort(to_sort, left, middle);
        merge_sort(to_sort, middle + 1, right);
        merge(to_sort, left, middle, right);
    }
}

void
radix_sort(Appointment * to_sort[], Appointment * sorted[], int month, int column, int planet_amount, int planet_char)
{
    int cont_first, cont_last;
    int max = get_max(to_sort, month, column, planet_amount, cont_first, cont_last);
    //get_interval(to_sort, month, planet_amount, cont_first, cont_last);
    std::cout << "cont first: " << cont_first << ", cont last: " << cont_last << std::endl;

    counting_sort(to_sort, sorted, month, column, max, cont_first, cont_last); 

}







