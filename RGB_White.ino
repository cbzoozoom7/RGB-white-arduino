const int rgbR0OutPin = 3;
const int rgbG0OutPin = 5;
const int rgbB0OutPin = 6;
void setup() {
  // put your setup code here, to run once:
pinMode(rgbR0OutPin,OUTPUT);
pinMode(rgbG0OutPin,OUTPUT);
pinMode(rgbB0OutPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(rgbR0OutPin,255);
analogWrite(rgbG0OutPin,255);
analogWrite(rgbB0OutPin,255);
}
