#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    fstream file("data.txt", ios::app);
    file << "1\n2\n3\n4\n5" << endl;
    file.close();

    ifstream file1("data.txt");
    while(getline(file1, s))
    {
        cout << s;
    }
}