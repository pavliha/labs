#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <iomanip>
#include <fstream>

using namespace std;

class Car
{
private:
    char* buffer;
    const int maxLength;
public:

    Car(char* str);

    ~Car();

    int GetLength();
    void Dinam_prisv(char* str);
    void Konkatenation (char* str);
    void Show();
};
