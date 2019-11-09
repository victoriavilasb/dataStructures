int 
get_max(Appointment * to_sort[], int month, int column, int planet_amount)
{
    int it = 0;
    int max = to_sort[it]->planet_name[column];
    int curr_month = 1;
    while(curr_month <= month && it < planet_amount)
    {
        curr_month = to_sort[it]->month;
        if (curr_month < month)
        {
            it++;
            max = to_sort[it]->planet_name[column];
        } 
        else
        {
            if (max < to_sort[it]->planet_name[column])
            {
                max = to_sort[it]->planet_name[column];
            }
            it++;
        }
    }
    return max;
}

void 
months_counter(Appointment * calendar[], int total_time, int planet_amount)
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

void 
months_counter(Appointment * calendar[], int total_time, int planet_amount)
{
}
