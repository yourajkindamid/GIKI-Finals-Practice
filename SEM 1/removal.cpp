#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> nums = {0,1,2,2,3,0,4,2};
   int h = 2;
   int temp;
   for(int i=0; i<nums.size(); i++)
   {
        if(nums.at(i) == h)
       {
           temp = nums.at(nums.size() - 1-i);
           nums.at(nums.size() - 1-i) = nums.at(i);
           nums.at(i) = temp;
       }
   }
  for(int i=0; i<nums.size(); i++)
   {
       cout << nums.at(i) << endl;
   }

    return 0;
}