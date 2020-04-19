int led = 8;
char state;
void setup()
{
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);
  interrupts();
}

void loop()
{
  if (Serial.available())
  {
    state = Serial.read();
    
    if (state == 'h')
    {
      digitalWrite(led, HIGH);
    }
    else if (state == 'l'){
    digitalWrite(led, LOW);
    }
  }
}