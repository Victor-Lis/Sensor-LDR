const int sensor = A5;
const int verde = 8;
const int amarelo = 7;
const int vermelho = 6;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  Serial.begin(9600);
}

int interval = 400;

void loop() {
  turnOff();
  Serial.println(analogRead(sensor));
  if(analogRead(sensor) > interval*2){
    digitalWrite(verde, HIGH);
  }else if((analogRead(sensor) > interval) && (analogRead(sensor) < interval*2)){
    digitalWrite(amarelo, HIGH);
  }else{
    digitalWrite(vermelho, HIGH);
  }
  delay(100);
}

void turnOff(){
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
}
