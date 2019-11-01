#include <iostream>
#include "helpers.hpp"

int *
counting_sort(int to_sort[], int length)
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
    return sorted;
}

int * 
merge_sort(int to_sort[], int left, int right)
{
    if(left < right)
    {
        int middle = (left+(right-left))/2;
        merge_sort(to_sort, left, middle);
        merge_sort(to_sort, middle+1, right);
        merge(to_sort, left, middle, right);
    }
}






