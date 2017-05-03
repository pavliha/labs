//
// Created by pavel on 3/3/17.
//

#include "coord.h"

coord coord::add(coord obj) {
    coord temp;
    temp.x = x + obj.x;
    temp.y = y + obj.y;
    temp.z = z + obj.z;
    return temp;
}

coord coord::sub(coord obj) {
    coord temp;
    temp.x = x - obj.x;
    temp.y = y - obj.y;
    temp.z = z - obj.z;
    return temp;
}

void coord::input() {
    cout << "input vector" << endl;
    cin >> x >> y >> z;
}

void coord::show() {
    cout << x << y << z << endl;

}