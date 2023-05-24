void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
pinMode(A0,INPUT);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
}

int i;
void loop() {
  // put your main code here, to run repeatedly:
  i=0;
  int val=analogRead(A0);
  Serial.println(val);
  if (val>=770)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    delay(50);
    i=1;
  }
  if(i==1)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    delay(50); 
  }
  else
  {
     digitalWrite(13,LOW);
    digitalWrite(12,LOW);
  }
}
