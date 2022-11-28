
int led1 = 13;
int led2 = 12;

void setup() {
  pinMode (led1,OUTPUT);
  pinMode (led2, OUTPUT);
}

void loop() {
  int i, clign, both;
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(random(2000,5000));
  clign = random(5,20);
  both = random(1,4);
  for( i = 0; i < clign;i++)
  {
    digitalWrite(led1,LOW);
    if(both == 1){
      digitalWrite(led2,LOW);
    }
    delay(random(10,150));
        digitalWrite(led1,HIGH);
    if(both == 1){
      digitalWrite(led2,HIGH);
    }
    delay(random(10,150));
  }

}
