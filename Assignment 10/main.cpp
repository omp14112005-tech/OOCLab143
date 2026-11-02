#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    string line;

    // Open file for writing
    fout.open("sample.txt");

    // Write data into file
    while (true) {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    // Open file for reading
    ifstream fin;
    fin.open("sample.txt");

    // Read and display file contents
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}