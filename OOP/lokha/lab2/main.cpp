
#include "car.h"

int main()
{
    Car myCar="ABS";

    while(true)
    {
        cout<<"1 - Show"<<endl;
        cout<<"2 - Dynamical prisvoenie"<<endl;
        cout<<"3 - Konkatenation"<<endl ;
        cout<<"4 - Exit"<<endl ;
        cout << endl;
        int k;
        cin>>k;
        cout<<endl;
        switch(k)
        {
            case 1:
                myCar.Show();
                cout<<endl;
                cout<<endl;
                break;
            case 2:
                myCar.Dinam_prisv("OPA");
                myCar.Show();
                cout<<endl;
                cout<<endl;
                break;
            case 3:
                myCar.Konkatenation("ABS");
                myCar.Show();
                cout<<endl;
                cout<<endl;
                break;
            case 4: return 1;
        }
    }
    return 0;
}