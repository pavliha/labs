#include "human.h"

Human::Human(char *s){
    setName(s);
}

void Human::setName(char *s){
    name=new char [strlen(s)+1];
    strcpy (name, s);
}

char* Human::getName(){
    return name;
}

void Human::showData(){
    cout<<"name: "<<name<<endl;
}
