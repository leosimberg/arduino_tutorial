 /* 
 *  Blink three LED's in sequence
 *  
 *  Leo Simberg
 *  Arduino Tutorial Series
 *  Youtube video: https://goo.gl/8fyKiH
 *  
 */

// set the pins where the leds are connected
int led_green = 12;
int led_yellow = 11;
int led_red = 10;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led_green, HIGH);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW);
  delay(1000);            
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_red, LOW);
  delay(1000);            
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, HIGH);
  delay(1000);            
}
