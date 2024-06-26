int pwm1=5; 
int pwm2=6; 
int pwm3=7; 

float potValor, periodo, tiempo; 

void setup() {

  Serial.begin(9600); 
  pinMode(pwm1, OUTPUT); 
  pinMode(pwm2, OUTPUT);
  pinMode(pwm3, OUTPUT);

}

void loop() {
  potValor = analogRead(A1); 
  periodo = map(potValor, 0,1023,505,88); 
  //tiempo= periodo/100; 
  tiempo= periodo/3; 
  digitalWrite(pwm1, HIGH);
  delay(.25); 
  digitalWrite(pwm2, LOW);
  delay(.25);
  digitalWrite(pwm3, HIGH); 
  delay(tiempo); 

  digitalWrite(pwm1, HIGH);
  delay(.25); 
  digitalWrite(pwm2, LOW);
  delay(.25);
  digitalWrite(pwm3, LOW); 
  delay(tiempo); 

  digitalWrite(pwm1, HIGH);
  delay(.25); 
  digitalWrite(pwm2, HIGH);
  delay(.25);
  digitalWrite(pwm3, LOW); 
  delay(tiempo); 

  digitalWrite(pwm1, LOW);
  delay(.25); 
  digitalWrite(pwm2, HIGH);
  delay(.25);
  digitalWrite(pwm3, LOW); 
  delay(tiempo); 

  digitalWrite(pwm1, LOW);
  delay(.25); 
  digitalWrite(pwm2, HIGH);
  delay(.25);
  digitalWrite(pwm3, HIGH); 
  delay(tiempo); 

  digitalWrite(pwm1, LOW);
  delay(.25); 
  digitalWrite(pwm2, LOW);
  delay(.25);
  digitalWrite(pwm3, HIGH); 
  delay(tiempo); 


}
