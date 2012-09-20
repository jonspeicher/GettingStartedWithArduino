// -------------------------------------------------------------------------------------------------
// DimOneLedWithPot - Dim one external LED attached to pin 11 using a pot attached to analog 0
// A project of Indiana University of Pennsylvania by Jon Speicher (jon.speicher@gmail.com)
// Derived from Intro to Programming the Arduino by HackPittsburgh (see README.markdown)
// Licensed under CC BY-NC-SA 3.0: http://creativecommons.org/licenses/by-nc-sa/3.0
// -------------------------------------------------------------------------------------------------

int ledPin = 11;                    // Define a variable for the LED pin
int potPin = 0;                     // Define a variable for the pot pin

int potValue;                       // Define a variable for the pot value
int brightness;                     // Define a variable for the brightness

void setup()                        // Run once when the sketch starts
{
}

void loop()                         // Run over and over again
{
  potValue = analogRead(potPin);    // Read the pot value
  brightness = potValue / 4;        // Update the brightness variable
  analogWrite(ledPin, brightness);  // Set the LED brightness
}
