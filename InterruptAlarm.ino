#define LedR 12
#define LedG 13
#define Switch 7

void setup() 
{
  Serial.begin(9600);
  pinMode(LedR, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(Switch, INPUT);
  digitalWrite(LedR, LOW);
  digitalWrite(LedG, LOW);
  Serial.println("Command line:");
  attachInterrupt(digitalPinToInterrupt(Switch), alarm, CHANGE);
  Serial.println("System activeted");
}

void loop() 
{
 Serial.println("System Working");
 digitalWrite(LedG, HIGH);
}
void alarm() 
{   digitalWrite(LedG, LOW);
    digitalWrite(LedR, HIGH);
    Serial.println("ALARM!"); 
}
