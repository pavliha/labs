//
// Created by pavel on 3/3/17.
//

#ifndef CLION_COORD_H
#define CLION_COORD_H

#endif //CLION_COORD_H

#include <iostream>

using namespace std;

class coord {
    int x, y, z;

public:
    coord() {
        x = 0;
        y = 0;
        z = 0;
    }

    coord(int i, int j, int k) {
        x = i;
        y = j;
        z = k;
    };

    void input();

    void show();

    coord add(coord obj);

    coord sub(coord obj);
};
