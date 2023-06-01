#define ENA 5
#define ENB 6
#define IN1 3
#define IN2 4
#define IN3 2
#define IN4 7  

#define carSpeed 200//Set the carSpeed to 130

void forward(){//forward function
  analogWrite(ENA, carSpeed);//Set the speed of ENA
  analogWrite(ENB, carSpeed);//Set the speed of ENB
    //The right forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  //The left forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  Serial.println("Forward");
}

void back() {//back function
  analogWrite(ENA, carSpeed);//Set the speed of ENA
  analogWrite(ENB, carSpeed);//Set the speed of ENB
  //The rihgt back
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  //The left back
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("Back");
}

void left() {//left function
  analogWrite(ENA, 200);//Set the speed of ENA
  analogWrite(ENB, 200);//Set the speed of ENB
   //The right forward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  //The left back
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  Serial.println("Left");
}

void right() {//right function
  analogWrite(ENA, 200);//Set the speed of ENA
  analogWrite(ENB, 200);//Set the speed of ENB
  //The rihgt back
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
   //The left forward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  Serial.println("Right");
}

void stop() {//stop function
  digitalWrite(ENA, LOW);//Set the speed of ENA to low 
  digitalWrite(ENB, LOW);//Set the speed of ENB to low
  Serial.println("Stop!");
}

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  stop();
}

void loop(){
  forward();
  delay(1000);  
  back();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
}