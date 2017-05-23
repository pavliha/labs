//
// Created by incode8 on 03.05.17.
//

#ifndef LAB5R_SHAPE_H
#define LAB5R_SHAPE_H


class Shape {
protected:
    const char *type;
    double center;
    double angle;
    double scale;
    bool visibility;
    double position;

    void show();
    void hide();
    void turn(double);
    void move(double);
};


#endif //LAB5R_SHAPE_H
