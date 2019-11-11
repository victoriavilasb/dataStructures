#include <iostream>
#include "./Appointment.hpp"
#include "helpers.hpp"

void
counting_sort(Appointment to_sort[], int month, int initial, int column, int max, int cont_first, int cont_last)
{
    int i, j, count;
    int converted;
    int size = cont_last - cont_first + 1;
    Appointment ** temp = new Appointment*[max+1];
    for(int i = 0; i < max+1; i++)
        temp[i] = new Appointment[size];

    for (i = cont_first; i <= cont_last; i++)
    {
        j = 0;
        converted = to_sort[i].planet_name[column];
        while (temp[converted][j].month)
        {
            j++;
        }

        temp[converted][j] = to_sort[i];
    }

    count = 0;
    for (i = 0; i < max+1; i++)
    {
        j = 0;
        while(temp[i][j].month) 
        {
            to_sort[cont_first + count] = temp[i][j];
            j++;
            count++;
        }      
    }
}

void
merge(Appointment to_sort[], int left, int middle, int right)
{
    int i, j, k;
    int length_left = middle - left + 1, length_right = right - middle;
    Appointment * LEFT = new Appointment[length_left];
    Appointment * RIGHT = new Appointment[length_right];

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
        if (LEFT[i].duration <= RIGHT[j].duration)
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

    delete [] RIGHT;
    delete [] LEFT;
}

void 
merge_sort(Appointment to_sort[], int left, int right)
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
radix_sort(Appointment to_sort[], int months_init[], int month, int column, int planet_amount, int planet_char)
{
    int initial = months_init[month];
    int last = months_init[month+1]-1;
    int max = get_max(to_sort, month, column, planet_amount, initial, last);

    counting_sort(to_sort, month, initial, column, max, initial, last); 

}







