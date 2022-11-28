
int led1 = 13;
int led2 = 12;

void setup() {
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
}

void effect1() {
  int i,clign, both;

  clign = random(5,20);
  both = random(1,4);

  for( i = 0;i<clign;i++) {
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

void effect2() {

}

void effect3() {
  global_blink(10);
  global_blink(30);
  global_blink(50);
  global_blink(70);
  global_blink(80);
  global_blink(120);
  global_blink(150);
  global_blink(170);
  global_blink(180);
}
  
global_blink(int period) {
  int i;
  for(i=0;i<10;i++){
    delay(period);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    delay(period);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }
}

void loop() {
  int randEffect;
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(random(2000,5000));

  randEffect = random(1,3);
  switch (randEffect){
    case 1:
      effect1();
      break;
    case 2:
      effect2();
      break;
    case 3:
      effect3();
      break;
    default:
      effect1();
      break;
  }
}
