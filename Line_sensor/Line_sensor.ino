const int tcrtPin = 11; //the tracking module attach to pin 2
const int ledPin = 13;
 
void setup()
{
  Serial.begin(9600);
  pinMode(tcrtPin, INPUT); // set trackingPin as INPUT
  pinMode(ledPin, OUTPUT); //set ledPin as OUTPUT
}
 
void loop()
{
  boolean val = digitalRead(tcrtPin); // read the value of tcrt5000
  Serial.println(val);
  if(val == HIGH) //if it is HiGH
  { 
    digitalWrite(ledPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, HIGH);
  }
}
