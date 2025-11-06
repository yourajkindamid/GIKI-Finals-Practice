/*#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums={1,1,1,1};
    int size = nums.size();
    vector<int> store(size, 0);
    for(int i=0; i<nums.size(); i++)
    {
        store.at(i) = nums.at(0) + nums.at(i); 
    }
    for(int i=0; i<nums.size(); i++)
    {
        cout << store.at(i) << endl;
    }
}*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums={1,2, 3, 4};
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=0; j<nums.size(); j++)
        {
            if(i==0)
            {
                nums.at(i) = nums.at(0); 
            }
            while(i>j)
            {
                nums.at(i) += nums.at(j);
            }
        }
    }
    for(int i=0; i<nums.size(); i++)
    {
        cout << nums.at(i) << endl;
    }
}