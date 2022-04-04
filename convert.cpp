#include <iostream>
#include <cstring>
#include "convertCase.h"
using namespace std;
void convertCase(char text[])
{
    for(int i =0; i<=strlen(text);i++)
    {   int x = (int)text[i];
        if(122>=x&&x>=97)
        {
            cout<<char(x-32)<<endl;
        } else if (90>=x&&x>=65)
        {
            cout<<char(x+32)<<endl;
        }else{
            cout<<text[i]<<endl;
        }
    }
}