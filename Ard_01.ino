int s1;
void setup() {
 //pinMode(8,OUTPUT);
 Serial.begin(9600);

}

void loop() {

  s1=analogRead(A0);//A0 pin 
  Serial.println(s1);
  delay(1000);
  

}
