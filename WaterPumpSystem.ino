int waterPumpOne = 13; //pin that turns on first water PUMP for the tank. Relay connects to pin 13
int waterPumpTwo = 10; //pin that turns on first water PUMP for the bucket. Relay connects to pin 10
int wireOne = A1; //analog check for the water level in the tank.
int wireTwo = A2; //analog check for the water level in the bucket.
int water = 150;


void setup() {
  // put your setup code here, to run once:
  pinMode(waterPumpOne, OUTPUT);
  pinMode(waterPumpTwo, OUTPUT);
  Serial.begin(9600);
  pinMode(wireOne, INPUT);
  pinMode(wireTwo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(wireOne));
  if (analogRead(wireOne) > water) {
    digitalWrite(waterPumpOne, LOW);
  }
  if (analogRead(wireOne) < water) {
    digitalWrite(waterPumpOne, HIGH);
  }
  if (analogRead(wireTwo) < water){
    digitalWrite(waterPumpTwo, LOW);
  }
  if (analogRead(wireTwo) > water){
    digitalWrite(waterPumpTwo, HIGH);
  }
}
