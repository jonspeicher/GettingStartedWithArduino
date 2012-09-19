// -------------------------------------------------------------------------------------------------
// BlinkOneLed - Blink one external LED attached to pin 11
// A project of Indiana University of Pennsylvania by Jon Speicher (jon.speicher@gmail.com)
// Derived from Intro to Programming the Arduino by HackPittsburgh (see README.markdown)
// Licensed under CC BY-NC-SA 3.0: http://creativecommons.org/licenses/by-nc-sa/3.0
// -------------------------------------------------------------------------------------------------

int ledPin = 11;                // Define a variable for the LED pin

void setup()                    // Run once when the sketch starts
{
  pinMode(ledPin, OUTPUT);      // Make the LED pin an output
}

void loop()                     // Run over and over again
{
  digitalWrite(ledPin, HIGH);   // Turn the LED on
  delay(1000);                  // Wait one second (1000 milliseconds)
  digitalWrite(ledPin, LOW);    // Turn the LED off
  delay(1000);                  // Wait one second
}
