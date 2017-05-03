#include <string>

using namespace std;

class Human {
protected:
    string name;
    string middleName;
    string lastName;
    string birthDate;
    string gender;
public:


    string getName();

    void setName(string);

    string getMiddleName();

    void setMiddleName(string);

    string getLastName();

    void setLastName(string);

    string getBirthDate();

    void setBirthDate(string);

    string getGender();

    void setGender(string);


};


