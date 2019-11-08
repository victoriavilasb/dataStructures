int 
get_max(int to_sort[], int length)
{
    int max = to_sort[0]; 
    for (int i = 1; i < length; i++)
    {
        if (max < to_sort[i]) 
        {
            max = to_sort[i];
        }
    }
    return max;
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
