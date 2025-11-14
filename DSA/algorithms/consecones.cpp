#include <iostream>
using namespace std;

int main()
{
    
    int j = 0;   
    int nums[6] = {1, 1, 1, 1, 0, 1};
    int i = 0;
    int cons = 0;
        while(i < 6)
        {
            int cons1 = 0;
            while(j < 6 && nums[j] != 0)
            {
                j++;
                cons1++;
            }
            if(cons < cons1)
            {
                cons = cons1;
            }
            i++;
            j++;
        }
        
        cout << cons;
}