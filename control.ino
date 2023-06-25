#include "drone.h"

Drone drone;

void setup() {
    drone = Drone();
    drone.power(Power::ON);

    delay(1000);

    drone.height(Height::UP);
    delay(1000);
    drone.height(Height::STILL);

    drone.rotate(Rotate::CLOCKWISE);
}

void loop() {
    drone.reverseRotation();

    drone.move(Direction::LEFT);
    delay(1000);
}
