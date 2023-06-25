#include "speeds.h"

enum class Height {
    DOWN,
    STILL,
    UP
};

void fromLow(Height speed) {
    switch (speed) {
        case Height::STILL:
            Speeds::Medium.high();
            Speeds::Slow.low();
            break;

        case Height::UP:
            Speeds::Medium.high();
            Speeds::Slow.low();
            Speeds::Fast.high();
            Speeds::Medium.low();
            break;
    }
}

void fromMid(Height speed) {
    switch (speed) {
        case Height::DOWN:
            Speeds::Slow.high();
            Speeds::Medium.low();
            break;

        case Height::UP:
            Speeds::Fast.high();
            Speeds::Medium.low();
            break;
    }
}

void fromHigh(Height speed) {
    switch (speed) {
        case Height::DOWN:
            Speeds::Medium.high();
            Speeds::Fast.low();
            Speeds::Slow.high();
            Speeds::Medium.low();
            break;

        case Height::STILL:
            Speeds::Medium.high();
            Speeds::Fast.low();
            break;
    }
}

void changeHeight(Height currentSpeed, Height speed) {
    switch (currentSpeed) {
        case Height::DOWN:
            fromLow(speed);
            break;

        case Height::STILL:
            fromMid(speed);
            break;

        case Height::UP:
            fromHigh(speed);
            break;
    }
}
