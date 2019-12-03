#include<iostream>
#include<string>
#include"./header/LinkedList/LinkedList.cpp"
#include"./header/Tree/Tree.cpp"
#include"./header/methods.cpp"
using namespace std;

int main()
{
    long long int number_of_strings;
    std::cin >> number_of_strings;

    word _word;
    int position, i = 0;
    char option;

    // declaring a array of lists to store words
    LinkedList * hash = new LinkedList[number_of_strings];

    // add numbers in hash
    for (i = 0; i < number_of_strings; i++)
    {
        std::cin >> _word.word_desc;
        position = gets_position(_word.word_desc, number_of_strings);

        if(!is_on_hash(hash, _word, position))
        {
            hash[position].push(_word);
        }
    }

    // monting trees
    for (i = 0; i < number_of_strings; i++)
    {
        std::cin >> _word.word_desc;
        position = gets_position(_word.word_desc, number_of_strings);

        if(!is_on_hash(hash, _word, position))
        {
            hash[position].push(_word);
        }
    }

    while(std::cin >> option >> _word.word_desc)
    {   
        if(option == 'q')
        {
            position = gets_position(_word.word_desc, number_of_strings);

            std::cout << gets_qtd(hash + position, _word.word_desc) << endl;
        }

    }

    delete [] hash;

    return 0;
}

