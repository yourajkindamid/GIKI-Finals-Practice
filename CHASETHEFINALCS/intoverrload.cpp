#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data1.txt");

    if (!file.is_open()) {
        cerr << "Failed to open file.\n";
        return 1;
    }

    int number;
    while (file >> number) {
        cout << "Read number: " << number << endl;
    }

    file.close();
    return 0;
}
