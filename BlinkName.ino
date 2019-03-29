// ------------
// Blink an LED
// ------------
// Fisrt Name : SENAL
// Last Name: ARIYARATNE

int led1 = D7; // Instead of writing D7 over and over again, we'll write led1

void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

  pinMode(led1, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.

void loop() {
  // SENAL

  // START
  // Fist the led wil blink for three times, then start the first letter.
  // For a dot the delay is 1 second and for - is 2 seconds.
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(2000);


 // S : "... " Mose Code

  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);

  delay(1000);


 // E : "." Morse CODE
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);

  delay(1000);

  // N : "-."

  digitalWrite(led1, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);

  delay(1000);

  //A : ".-"

  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led1, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);

 delay(1000);

 // L : ".-.."
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led1, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);

// Wait 1 second...
  delay(1000);

  // And repeat!
}
