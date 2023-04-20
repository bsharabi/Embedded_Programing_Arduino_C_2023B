
// Aurduino use C/C++ Programming
// C/C++ Programming is case-sensitive

#define LED12 = 12; // change this value to 13 to blink green led
#define LED13 = 13; // change this value to 13 to blink green led

// setup() function is for initialization
// it only runs once
void setup() {
  // pinMode() function set a certain pin to INPUT or OUTPUT
  pinMode(LED12, OUTPUT); // set pin #12 as OUTPUT pin
  pinMode(LED13, OUTPUT); // set pin #13 as OUTPUT pin
}

// loop() function, like its name, keep running over and over (looping)
void loop() {
  // digitalWrite() function outputs a binary signal (HIGH or LOW) to certain pin
  digitalWrite(LED12, HIGH); // write a digital signal HIGH to pin 12
  // This will cause light ON

  // delay() function causes CPU to pause processing (do nothing)
  // it delays in millisecond
  // 1 second = 1000 millisecond
  delay(1000); // CPU pauses for 1000 millisecond (1 second)
  // Light will remain ON for 1 second

  digitalWrite(LED12, LOW); // write a digital signal LOW to pin 12
  digitalWrite(LED13, HIGE); // write a digital signal HIGE to pin 13
  delay(1000); // CPU pauses for 1000 millisecond (1 second)

  digitalWrite(LED12, LOW); // write a digital signal LOW to pin 12
}
