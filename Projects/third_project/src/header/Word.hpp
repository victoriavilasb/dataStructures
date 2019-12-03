#include<iostream>
using namespace std;

class word
{  
    public:
        string word_desc;
        string code;
        int count;
        word();
        ~word();
};

word::word()
{
    count = 1;
}

word::~word()
{
}
