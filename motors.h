#include "motor.h"

Motor top_left = Motor(8);
Motor top_right = Motor(9);
Motor bottom_left = Motor(10);
Motor bottom_right = Motor(11);

namespace Motors {
    namespace Top {
        Motor Left = top_left;
        Motor Right = top_right;

        void low() {
            Left.low();
            Right.low();
        }

        void high() {
            Left.high();
            Right.high();
        }
    }

    namespace Bottom {
        Motor Left = bottom_left;
        Motor Right = bottom_right;

        void low() {
            Left.low();
            Right.low();
        }

        void high() {
            Left.high();
            Right.high();
        }
    }

    namespace Left {
        Motor Top = top_left;
        Motor Bottom = bottom_left;

        void low() {
            Top.low();
            Bottom.low();
        }

        void high() {
            Top.high();
            Bottom.high();
        }
    }

    namespace Right {
        Motor Top = top_right;
        Motor Bottom = bottom_right;

        void low() {
            Top.low();
            Bottom.low();
        }

        void high() {
            Top.high();
            Bottom.high();
        }
    }

    namespace EvenDiagonal {
        Motor Top = top_left;
        Motor Bottom = bottom_right;

        void low() {
            Top.low();
            Bottom.low();
        }

        void high() {
            Top.high();
            Bottom.high();
        }
    }

    namespace OddDiagonal {
        Motor Top = top_right;
        Motor Bottom = bottom_left;

        void low() {
            Top.low();
            Bottom.low();
        }

        void high() {
            Top.high();
            Bottom.high();
        }
    }

    void low() {
        Top::low();
        Bottom::low();
    }

    void high() {
        Top::high();
        Bottom::high();
    }
}
