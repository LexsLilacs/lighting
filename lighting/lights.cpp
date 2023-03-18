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

    // first test if both buttons are pressed
    if (switchL == HIGH && switchR == HIGH){
      digitalWrite(5, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    } else {
          // now that's out the way, we test for everything else as a whole here
          // first test switchL
        if (switchL == HIGH) {
          digitalWrite(4, HIGH);
          digitalWrite(3, LOW);
        } else {
          digitalWrite(4, LOW);
          digitalWrite(3, HIGH); 
        } // end if switchL
          // then test switchR
        if (switchR == HIGH) {
          digitalWrite(6, HIGH);
          digitalWrite(7, LOW);       
        } else {
          digitalWrite(6, LOW);
          digitalWrite(7, HIGH); 
        } //end if switchR
    }     //end else of both high
} 
} 
