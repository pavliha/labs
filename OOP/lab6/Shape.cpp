//
// Created by incode8 on 03.05.17.
//

#include "Shape.h"

void Shape::show() {
    visibility = true;
}

void Shape::hide() {
    visibility = false;
}

void Shape::turn(double angle) {
    this->angle =  angle;
}

void Shape::move(double vector) {

}
