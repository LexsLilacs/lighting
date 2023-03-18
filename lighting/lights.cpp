//Using Arduino UNO

int switchL = 0; //Left button
int switchR = 0; //Right button

void setup() {            //LED from left to right
  pinMode(3, OUTPUT); //Red
  pinMode(4, OUTPUT); //Green
  pinMode(5, OUTPUT); //Blue
  pinMode(6, OUTPUT); //Green
  pinMode(7, OUTPUT); //Red
  Serial.begin(9600);

}

void loop() {
  switchL = digitalRead(2);
  switchR = digitalRead(8);

    if (switchL == HIGH) {
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
    } else {
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH); 
    }
     if (switchR == HIGH) {
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);       
    } else {
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH); 
    }
    if (switchL == HIGH && switchR == HIGH){
      digitalWrite(5, HIGH);
          if (digitalRead(5) == HIGH) {
            digitalWrite(4, LOW);
            digitalWrite(3, LOW);
            digitalWrite(7, LOW);
            digitalWrite(6, LOW);
          } else {
            digitalWrite(5, LOW);
          }
    }
} 
