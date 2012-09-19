// -------------------------------------------------------------------------------------------------
// Dimming - Dim one external LED attached to pin 11
// A project of Indiana University of Pennsylvania by Jon Speicher (jon.speicher@gmail.com)
// Derived from Intro to Programming the Arduino by HackPittsburgh (see README.markdown)
// Licensed under CC BY-NC-SA 3.0: http://creativecommons.org/licenses/by-nc-sa/3.0
// -------------------------------------------------------------------------------------------------

int ledPin = 11;                    // Define a variable for the LED pin
int brightness = 64;                // Define a variable for the brightness

void setup()                        // Run once when the sketch starts
{
}

void loop()                         // Run over and over again
{
  analogWrite(ledPin, brightness);  // Set the LED brightness
}
