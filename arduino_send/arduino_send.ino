//including libs
// #include <stdlib.h>

//pin outs
#define PIN_TX 2
#define PIN_TEMPERATURE A0

//define global variables
#define DELAY 2500
#define RESISTENCE 10010; //ohm resistence

//variables
int read_value = 0;
float temperature, resistence1 = RESISTENCE;
float resistence2, logr2;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;


// setting the pins io
void setup() {
  pinMode(PIN_TX, OUTPUT);
  // pinMode(PIN_TEMPERATURE, INPUT);
  // srand(42);
  Serial.begin(9600);
}

void loop() {
  read_value = analogRead(PIN_TEMPERATURE);
  resistence2 = resistence1 *(1023.0 / (float)read_value - 1.0);
  logr2 = log(resistence2);
  temperature = (1.0 / (c1 + c2*logr2 + c3*logr2*logr2*logr2));
  temperature -= 273.15;
  Serial.println(temperature);
  delay(100);
}
