
#include "student.h"

int main(){
    Human obj1("Ivan");
    obj1.showData();
    obj1.setName("Ivan Ivanov");
    cout<<"Name of obj1 is "<<obj1.getName()<<"\n\n";
    Student obj2 ("Alex",123456789);
    obj2.showData();
    obj2.setName("Alexandr");
    obj2.setZk_number(987654321);
    cout<<"Name of obj2 is "<<obj2.getName()<<"\nzk_number is "<<obj2.getZk_number()<<endl;
    cin.get();
    return 0;
}
