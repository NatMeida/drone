#include "motors.h"

enum class Direction {
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT,
    STILL
};

void moveForwards() {
    Motors::Top::low();
    Motors::Bottom::high();
}

void moveBackwards() {
    Motors::Top::high();
    Motors::Bottom::low();
}

void moveLeft() {
    Motors::Left::low();
    Motors::Right::high();
}

void moveRight() {
    Motors::Left::high();
    Motors::Right::low();
}

void still() {
    Motors::low();
}

void move(Direction direction) {
    switch (direction) {
        case Direction::FORWARD:
            moveForwards();
            break;

        case Direction::BACKWARD:
            moveBackwards();
            break;

        case Direction::LEFT:
            moveLeft();
            break;

        case Direction::RIGHT:
            moveRight();
            break;

        case Direction::STILL:
            still();
            break;
    }
}
