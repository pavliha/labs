#include <iostream>
#include <stdio.h>
#include <iostream>

using namespace std;

class base {

    int a;

protected:

    int b;

public:

    int c;

    base() { a = 0, b = 0, c = 0; }

    base(int x, int y, int z) { a = x, b = y, c = z; }

    void show();

};

class derived1 : private base {

public:

    void set(int x, int y, int z) {

//	a=x;

        b = y;

        c = z;

    }

    void show();

};


class derived2 : protected base {

public:

    void set(int x, int y, int z) {

        b = y;

        c = z;

    }

    void show();

};

class derived3 : public base {

public:

    void set(int x, int y, int z) {

//	 a=x;

        b = y;

        c = z;

    }

    void show();

};

void base::show() {

    cout << "In base" << endl;

    cout << a;

    cout << b;

    cout << c;

}

void derived1::show() {

    cout << "In derived 1" << endl;

//	cout<<a;

    cout << b;

    cout << c;

}

void derived2::show() {

    cout << "In derived 2" << endl;

//	cout<<a;

    cout << b;

    cout << c;

}

void derived3::show() {

    cout << "In derived 3" << endl;

//	cout<<a;

    cout << b;

    cout << c;

}

int main() {

    base ob(1, 2, 3);

    //  cout << "a="<<ob.a<<endl;

    //cout << "b="<<ob.b<<endl;

    cout << "c=" << ob.c << endl;


    derived1 ob1;

    ob1.set(4, 5, 6);

    ob1.show();


    derived2 ob2;

    ob1.set(7, 8, 9);

    ob1.show();


    derived3 ob3;

    ob1.set(10, 11, 12);

    ob1.show();

}