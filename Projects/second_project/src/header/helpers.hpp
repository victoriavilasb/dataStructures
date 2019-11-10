int 
get_max(Appointment * to_sort[], int month, int column, int planet_amount, int &cont_first, int &cont_last)
{
    int it = 0;
    int max = to_sort[0]->planet_name[column];
    int curr_month = 1;
    cont_first = 0;
    while(curr_month <= month && it < planet_amount-1)
    { 
        if (curr_month < month)
        {
            it++;
            max = to_sort[it]->planet_name[column];
            cont_first = it;
        } 
        else
        {
            if (max < to_sort[it]->planet_name[column])
            {
                max = to_sort[it]->planet_name[column];
            }
            cont_last = it;
            it++;
        }
        
        curr_month = to_sort[it]->month;
    }
}

void get_interval(Appointment * to_sort[], int month, int planet_amount, int &cont_first, int &cont_last)
{
    int it = 0;
    int curr_month = to_sort[it]->month;
    if (curr_month == month)
    {
        cont_first = it;
        while(curr_month == month)
        {
            cont_last = to_sort[it]->month;
            std::cout << curr_month << " " << month << std::endl;
            it++;
        }
    }
}


void 
months_counter(Appointment * calendar[], int total_time, int planet_amount)
{
    int months_count = 1, sum = 0;
    for(int i = 0; i < planet_amount; i++)
    {
        sum += calendar[i]->duration;
        if (sum < total_time)
        {
            calendar[i]->month = months_count;
        }
        else if (sum == total_time)
        {
            sum = 0;
            calendar[i]->month = months_count;
            months_count++;
        }
        else
        {
            sum = calendar[i]->duration;
            months_count++;
            calendar[i]->month = months_count;
        }

        
    }
}

