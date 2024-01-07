
//
// Created by Admin on 06.01.2024.
//

#include <Arduino.h>


#define enA 6
#define in1 7
#define in2 8


const int LM393 = 2;
int counter = 0;


void setup() {
    Serial.begin(115200);

    //engine part

    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(4, OUTPUT);

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(4, HIGH);

    int pwmOutput = 100;
    analogWrite(enA, pwmOutput); // Send PWM signal to L298N Enable pin

}


void loop() {
    analogWrite(enA, 250);
    Serial.println("TEst");

    delay(500);
}