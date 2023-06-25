class Speed {
    private:
        int PIN;

    public:
        Speed(int pin) {
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
}