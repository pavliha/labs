#include <iostream>
#include <cstring>
#include <fstream>
#include "MyString.h"

using namespace std;
const char *inputFilename = "testfile1.txt";
const char *filename = "testfile2.txt";


int main() {

    ofstream fileStream;
    ifstream readStream(inputFilename);
    string s;
    string toFind = "st";
    string toReplace = "mt";
    try {
        while (!(readStream >> s).eof()) {
            if (readStream.bad()) {
                cerr << "Unrecoverable read error" << endl;
                return 2;
            }
            cout << s;
        }
        readStream.close();
    } catch (int e) {
        cerr << "Output file open error \"" << filename << "\"" << " " << e << endl;
        return 2;
    }
    MyString myString(s);

    fileStream.open(filename);
    try {
        if (fileStream.bad()) { cerr << "Unrecoverable write error" << endl;return 1; }
        fileStream << "Replacing:" << myString.replace(toFind, toReplace) << endl;
        string check = myString.hasString(toFind) ? "true" : "false";
        fileStream << "Checking if has a string " << toFind << ": " << check << endl;
        fileStream << "Count string: " << myString.count() << endl;
        MyString myString1 = myString + myString;
        fileStream << "Concatenate string: " << myString1 << endl;
        fileStream.close();
    } catch (int e) {
        cerr << "Input file open error \"" << filename << "\"" << " " << e << endl;
        return 1;
    }
    return 0;

}