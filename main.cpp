#include <iostream>
#include <cstring>
#include "convertCase.h"
using namespace std;

int main()
{
    char tab[5];
cout<<"podaj znaki:";
for(int i = 0 ; i<4;i++)
{
    cout<<"znak "<<i+1<<endl;
   cin>>tab[i];
    cin.get();
}

convertCase(tab);
    return 0;
}