
char bluetoothVal;//converting data received from serial monitor to integer
int relaySwitch = 2;
bool val = HIGH;
void setup() {
  Serial.begin(9600);//enable serial monitor
  pinMode(relaySwitch, OUTPUT);//define relay pin

}

void loop() {
  if (Serial.available() == 0) {
  }
   bluetoothVal = Serial.read();//read serial value
  Serial.println(bluetoothVal);
  if (bluetoothVal == '1') {
    val = HIGH;
    digitalWrite(relaySwitch, val);//turn on the bulb
    
  } 
  else if (bluetoothVal == '0') {
    val = LOW;
    digitalWrite(bluetoothVal, val);//turn off the bulb
  }
  else{
    digitalWrite(relaySwitch,val);//leave the bulb the way it is
  } 
 delay(50);
}
