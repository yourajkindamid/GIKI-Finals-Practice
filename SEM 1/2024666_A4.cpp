#include <iostream>
using namespace std;

//function for finding the length of a string
int my_str_len(char* s)
{
    int counter=0;
    int i = 0;

    if(s == nullptr)        //test to see if the pointer is null
    {
        return -1;
    }
    else 
    { 
        do                      //continue incrementing i and counter until "end of string" character
            {
                i++;
                ++counter;
            }
         while ((*(s + i)) != '\0');
    }
    
    return counter;
}

//function for comparing two strings
int my_str_n_cmp(char* s1, char* s2 , int len)
{
    int counter = 0;
    for(int i=0; i<len; i++)
    {
        if(*(s1 + i) == *(s2 + i ) )                                    //different conditions for comparison of strings
        {counter++;}

        else if( (*(s1 + i) || *(s2 + i) ) == '0')
        {return -1;}

        else if( ( *(s1 + i) != *(s2 + i) ) && ( * (s1 + i) > *(s2 + i) ) )
        {return 1;}

        else if( (*(s1 + i) != *(s2 + i)) && (*(s1 + i) < *(s2 + i)) )
        {return 2;}
    }
    return 0;
}

//function to find occurence of a substring
int my_str_str(char* s1, char* s2)
{
    if (s1 == nullptr)                          //test cases for null pointers
    {   return -1;  }
    else if (s2 == nullptr)
    {   return -1;  }
    for (int i = 0; i < *(s1 + i); i++)                     //running s1 and s2 in separate loops until s2 is found in s1 and neither s1 and s2 have reached "end of string" character
    {
        int j = 0;
        while ((s1 [i + j] != '\0') && (s2 [j] !='\0') && ( s1[i + j] == s2[j]))
        j++;
        if(s2[j] == '\0')
            return i;
    }

    return -1;
}


int main () {       
cout << "my_str_len returned " << my_str_len((char*)"Hello!") << endl;

cout << "my_str_n_cmp returned " << my_str_n_cmp((char*)"teeth", (char*)"teeter", 4 ) << endl;
cout << "my_str_n_cmp returned " << my_str_n_cmp((char*)"bot", (char*)"bit", 3 ) << endl;
cout << "my_str_n_cmp returned " << my_str_n_cmp((char*)"bit", (char*)"bot", 3 ) << endl;


cout << "my_str_str returned " << my_str_str((char*)"casablanca", (char*)"blanc" ) << endl;
cout << "my_str_str returned " << my_str_str((char*)"the dog said: wow wow wow", (char*)"wow" ) << endl;

cout << "my_str_str returned " << my_str_str((char*)"the quick brown cat", (char*)"owner" ) << endl;

return 0;
}