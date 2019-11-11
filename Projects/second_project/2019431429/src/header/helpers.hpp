using namespace std;

int 
get_max(Appointment to_sort[], int month, int column, int planet_amount, int initial, int last)
{
    int max = to_sort[initial].planet_name[column];

    for(int i = initial; i<=last; i++)
    {
        if (max < to_sort[i].planet_name[column])
        {
            max = to_sort[i].planet_name[column];
        }
    }
    
    return max;
}

void 
months_counter(Appointment calendar[], int total_time, int planet_amount, int months_init[])
{
    months_init[1] = 0;
    int months_count = 1, sum = 0;
    for(int i = 0; i < planet_amount; i++)
    {
        sum += calendar[i].duration;
        if (sum < total_time)
        {
            calendar[i].month = months_count;
        }
        else if (sum == total_time)
        {
            sum = 0;
            calendar[i].month = months_count;
            months_count++;
            months_init[months_count] = i;
        }
        else
        {
            sum = calendar[i].duration;
            months_count++;
            calendar[i].month = months_count;
            months_init[months_count] = i;
        }
    }
    months_init[months_count+1] = planet_amount;
}

