/* 
 *  Select the LED using a potentiometer
 *  
 *  Leo Simberg
 *  Arduino Tutorial Series
 *  Youtube video: https://goo.gl/8fyKiH
 */

// set the pins where the leds are connected
int led_green = 12;
int led_yellow = 11;
int led_red = 10;

// select the input pin for the potentiometer
int potPin = 2;    

// variable to store the value coming from the potentiometer
int val = 0;       

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  val = analogRead(potPin);    // read the value from the potentiometer (0-1023)
  //Turn off the leds
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_green, LOW);

  //Use the potetiometer value to choose which LED will be turned on
  if (val > 750) digitalWrite(led_red, HIGH);
  else if (val > 330) digitalWrite(led_yellow, HIGH);
  else digitalWrite(led_green, HIGH);
}
