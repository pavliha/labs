#include "coord.h"

using namespace std;

int main() {
    coord a(10, 10,10ф),b,c,d;

    b.input();
    c=b.add(a);
    c.show();
    d=b.sub(a);
    d.show();


    return 1;


}