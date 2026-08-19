int sensorPin = 7;
int ledPin = 6;
int estadoSensor;

void setup() {
    pinMode(sensorPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    estadoSensor = digitalRead(sensorPin);

    if (estadoSensor == HIGH) {
        digitalWrite(ledPin, HIGH);
        delay(5000);
    }
    else {
        digitalWrite(ledPin, LOW);
    }
}
