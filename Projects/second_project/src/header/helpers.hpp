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

void months_counter(Appointment * calendar[], int total_time, int planet_amount)
{
    int months_count = 1, sum = 0;
    for(int i = 0; i < planet_amount; i++)
    {
        calendar[i]->month = months_count;
        if (sum < total_time)
        {
            sum += calendar[i]->duration;
        }
        else
        {
            sum = 0;
            months_count++;
        }
    }
}