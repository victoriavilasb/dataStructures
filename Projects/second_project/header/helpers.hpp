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

int
merge(int to_sort[], int left, int middle, int right)
{
    //
}