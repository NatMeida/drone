#include "motors.h"

enum class Rotate {
    NONE,
    CLOCKWISE,
    COUNTERCLOCKWISE
};

void rotateLeft() {
    Motors::OddDiagonal::low();
    Motors::EvenDiagonal::high();
}

void rotateRight() {
    Motors::OddDiagonal::high();
    Motors::EvenDiagonal::low();
}

void rotateNone() {
    Motors::low();
}

void rotate(Rotate rotation) {
    switch (rotation) {
        case Rotate::CLOCKWISE:
            rotateLeft();
            break;

        case Rotate::COUNTERCLOCKWISE:
            rotateRight();
            break;

        case Rotate::NONE:
            rotateNone();
            break;
    }
}

void rotateFor(int ms, Rotate rotation) {
    rotate(rotation);
    delay(ms);
    rotate(Rotate::NONE);
}
