#include <iostream>
#include <cmath>
#include <iomanip>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    int time[2] = {0, 0};
    int option;
    for(int i = 0; i < 2; i++)
    {
        cout << setw(5) << time[i];
    }
    cout << endl;
    cout << "Start(1) / Stop(2) / Reset(3) / Exit(4)?" << endl;
    cin >> option;
    cout <<  high_resolution_clock::now();
    
    std::cout << "duration (in periods): ";
    std::cout << mil.count() << " milliseconds.\n";
     
    std::cout << "duration (in seconds): ";
    std::cout << (mil.count() * milliseconds::period::num / 
                               milliseconds::period::den);
    std::cout << " seconds.\n";


   
    
}