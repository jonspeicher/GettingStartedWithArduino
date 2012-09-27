// -------------------------------------------------------------------------------------------------
// DimThreeLedsWithPots - Dim three external LEDs attached to pins 9, 10, and 11 using three pots
//                        attached to analog 0, 1, and 2
//
// A project of Indiana University of Pennsylvania by Jon Speicher (jon.speicher@gmail.com)
// Derived from Intro to Programming the Arduino by HackPittsburgh (see README.markdown)
// Licensed under CC BY-NC-SA 3.0: http://creativecommons.org/licenses/by-nc-sa/3.0
// -------------------------------------------------------------------------------------------------

int redLedPin = 11;                      // Define a variable for the red LED pin
int redPotPin = 0;                       // Define a variable for the red pot pin

int greenLedPin = 10;                    // Define a variable for the greeb LED pin
int greenPotPin = 1;                     // Define a variable for the green pot pin

int blueLedPin = 9;                      // Define a variable for the blue pot pin
int bluePotPin = 2;                      // Define a variable for the blue pot pin

int potValue;                            // Define a variable for the pot value
int brightness;                          // Define a variable for the brightness

void setup()                             // Run once when the sketch starts
{
}

void loop()                              // Run over and over again
{
  potValue = analogRead(redPotPin);      // Read the red pot value
  brightness = potValue / 4;             // Update the brightness variable
  analogWrite(redLedPin, brightness);    // Set the red LED brightness

  potValue = analogRead(greenPotPin);    // Read the green pot value
  brightness = potValue / 4;             // Update the brightness variable
  analogWrite(greenLedPin, brightness);  // Set the green LED brightness

  potValue = analogRead(bluePotPin);     // Read the blue pot value
  brightness = potValue / 4;             // Update the brightness variable
  analogWrite(blueLedPin, brightness);   // Set the blue LED brightness
}