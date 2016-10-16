/* 
 *  Change LED brightness using PWM
 *  
 *  Leo Simberg
 *  Arduino Tutorial Series
 *  Youtube video: https://goo.gl/8fyKiH
 */

// set PWM pin setup
int led_red_pwm = 6;

// select the input pin for the potentiometer
int potPin = 2;    

// variable to store the value coming from the potentiometer
int val = 0;       

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led_red_pwm, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  val = analogRead(potPin);    // read the value from the potentiometer (0-1023)
  //Set PWM signal value
  analogWrite(led_red_pwm, val / 4); //PWM range 0-255
}
