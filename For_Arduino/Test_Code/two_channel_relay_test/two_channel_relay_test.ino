//----------------------------------------
// IDE: Arduino 1.8.0
// Connection:
// Two_Channel_Relay ------ arduino uno
//       VCC ------------------ 5V
//       GND ------------------ GND
//       IN1 ------------------ D2
//       IN2 ------------------ D3
//---------------------------------------
const int Relay1 = 2;
const int Relay2 = 3;

void setup() {
  // put your setup code here, to run once:
    pinMode(Relay1, OUTPUT);
    pinMode(Relay2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(Relay1, LOW);
    delay(  500 );
    digitalWrite(Relay1, HIGH);
    delay(  500 );
    digitalWrite(Relay2, LOW);
    delay(  500 );
    digitalWrite(Relay2, HIGH);
    delay(  500 );
}
