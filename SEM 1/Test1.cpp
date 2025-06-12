#include <iostream>
using namespace std;
int main()
{
    int bulbs[10];
    bulbs[10] = 0;

    for(int i=0; i<10;i++)
    {
        bulbs[i]=1;
    }

  for(int i=0;i<10 ; i+=2)
    {
        {
             bulbs[i]= 0;
        }
    }

    for(int i = 0;i<10  ; i++)
    {
        cout << bulbs[i];
    }
}

    