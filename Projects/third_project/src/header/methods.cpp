#include<math.h>

using namespace std;


bool 
is_prime(long long int number)
{
    for(long long int i = 2; i < number; i++)
    {
        if(number > 2)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

long long int 
get_next_prime_number(long long int number_of_strings)
{
    long long int prime = number_of_strings + 1;
    while(!is_prime(prime))
    {
        prime += 1;
    }
    return prime;
}


long long int 
hash_code(string word)
{
    int ascii;
    long long  int total = 0;
    int i = 1;
    for ( std::string::iterator it = word.begin(); it != word.end(); ++it)
    {
        ascii = it[0];
        total += ascii * get_next_prime_number(i) + get_next_prime_number(i+1);
        i++;
        if(i == 4) break;
    }
    return total;
}


bool
is_on_hash(LinkedList * hash, word value, long long int position)
{
    Node * temp = hash[position].head;
    while(temp)
    {
        if(temp->value.word_desc == value.word_desc) 
        {
            temp->value.count += 1;
            return true;
        }
        else
        {
            temp = temp->next;
        }       
    }
    return false;
}

long long int
gets_position(string symbol, long long int array_size)
{
    long long int code = hash_code(symbol) + array_size;
    return code % array_size;   
}

int 
gets_qtd(LinkedList * cell, string value)
{
    Node * temp = cell->head;
    while(temp->value.word_desc != value)
    {
        if(temp->next == NULL)
            break;
        else
            temp = temp->next;
    }

    return temp->value.count;
}