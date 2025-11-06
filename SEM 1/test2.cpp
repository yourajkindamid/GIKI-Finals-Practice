#include<iostream>
using namespace std;
int main()
{
    int heads=0;
    int tails=0;
    cout << "Coin Flipping"<<endl;
    srand(time(0));
    for(int i=0; i<10; i++)
    {
        if(rand()%2==0)
        {heads++;}
        else{tails++;}
    }

    cout << heads << " " << tails;
}