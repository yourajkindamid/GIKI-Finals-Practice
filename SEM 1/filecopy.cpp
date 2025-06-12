#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string arr[50];
    fstream infile;
    int p =0;


    infile.open("text.txt", ios::out);
    if(!infile)
    {cout << "error in file";}
    infile << "what up dawg";
    infile.close();

    if(!infile)
    {cout << "error in file";}

    infile.open("text.txt", ios::in);

    while(infile.eof()==0)
    {infile >> arr[p];
    p++;}
    infile.close();

    infile.open("new.txt", ios::out);
    if(!infile)
    {cout << "error in file";}
    for(int i=0; i<50; i++)
    {infile << arr[i] << " ";}
    infile.close();

}