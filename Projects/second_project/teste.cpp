#include<iostream>
using namespace std;

int * getArray();

int main()
{
    int * my_array;
    
    my_array = getArray();
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", my_array[i]);
    }
}

int * getArray()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    return arr;
}