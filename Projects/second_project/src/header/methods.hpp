#include <iostream>
#include "./Appointment.hpp"
#include "helpers.hpp"

void
counting_sort(Appointment * to_sort[], int length)
{
    int max_number = get_max(to_sort, length);
    int temp[max_number+1], i;
    int control_variable = 0;
    int * sorted = new int[length];

    for (i = 0; i <= max_number; i++)
    {
        temp[i] = 0;
    }

    for (i = 0; i < length; i++)
    {
        temp[to_sort[i]] += 1;
    }

    for (i = 0; i <= max_number; i++)
    {
        if (temp[i] > 0)
        {
            for (int j = 0; j < temp[i]; j++)
            {
                sorted[control_variable] = i; 
                control_variable++;
            }
        }
    }
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
radix_sort(Appointment * to_sort[], int max_number)
{
}







