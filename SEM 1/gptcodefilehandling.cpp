#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open the file in read/write and binary mode
    fstream file("example.dat", ios::in | ios::out | ios::binary | ios::trunc);

    // Check if the file opened successfully
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Write text data to the file using <<
    file << "Hello, World!" << endl;

    // Move the file pointer back to the beginning
    file.seekg(0);

    // Read text data from the file using >>
    string content;
    getline(file, content);

    // Display the read data
    cout << "Read from file: " << content << endl;

    // Close the file
    file.close();

    return 0;
}
