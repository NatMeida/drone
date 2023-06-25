class Motor {
    private:
        int PIN;

    public:
        Motor(int pin) {
            this->PIN = pin;
            pinMode(this->PIN, OUTPUT);
        }

        int pin() const {
            return this->PIN;
        }

        void high() {
            digitalWrite(this->PIN, HIGH);
        }

        void low() {
            digitalWrite(this->PIN, LOW);
        }
};