//including libs
#include <stdlib.h>

//pin outs 
#define PIN_RND 2

//define global variables
#define DELAY 2500

void setup() {
  // setting the pins io
  pinMode(PIN_RND, OUTPUT);
  srand(42);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_RND, 1);
  delay(DELAY);
  digitalWrite(PIN_RND, 0);
  delay(DELAY);
}
