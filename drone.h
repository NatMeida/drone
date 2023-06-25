#include "direction.h"
#include "height.h"
#include "rotate.h"

enum class Power {
    ON,
    OFF
};

class Drone {
    private:
        Direction direction;
        Height height;
        Rotate rotation;
        Power state;

    public:
        Drone() {
            this->direction = Direction::STILL;
            this->height = Height::STILL;
            this->rotation = Rotate::NONE;
            this->state = Power::OFF;
        }

        void height(Height height) {
            ::changeHeight(this->height, height);
            this->height = height;
        }

        void move(Direction direction) {
            ::move(direction);
            this->direction = direction;
        }

        void rotate(Rotate rotation) {
            ::rotate(rotation);
            this->rotation = rotation;
        }

        void reverseRotation() {
            switch (this->rotation) {
                case Rotate::CLOCKWISE:
                    this->rotate(Rotate::COUNTERCLOCKWISE);
                    break;

                case Rotate::COUNTERCLOCKWISE:
                    this->rotate(Rotate::CLOCKWISE);
                    break;
            }
        }

        void power(Power state) {
            switch (state) {
                case Power::ON:
                    digitalWrite(POWER, HIGH);
                    break;

                case Power::OFF:
                    this->height(Height::DOWN);
                    digitalWrite(POWER, LOW);
                    break;
            }

            this->state = state;
        }
};
