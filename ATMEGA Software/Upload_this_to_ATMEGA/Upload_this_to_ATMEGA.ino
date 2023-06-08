float voltage;
String data;
String measurement;
char d1;
int rawCurr = 0;
float current = 0;
int rspeed = 1000;
  
void setup() {
  pinMode(A1, INPUT);
  Serial.begin(9600);
}
 
void loop() {

  if(Serial.available()){
    data = Serial.readString();
    d1 = data.charAt(0);
  }
  float voltRaw = ((float)analogRead(A0))*5/1023;
  voltage = (voltRaw);
  rawCurr = analogRead(A1);
  current =   (rawCurr) / 1023.0 ;
  Serial.print(voltage, 3);
  Serial.print(";");
  Serial.print(current, 3);
  delay(rspeed);
}


