GettingStartedWithArduino
=========================

GettingStartedWithArduino is a collection of basic Arduino sketches used in the Indiana University
of Pennsylvania's *Getting Started With Arduino* workshop.

Description
===========

[Indiana University of Pennsylvania](http://www.iup.edu) has developed a one-day, hands-on workshop
dedicated to teaching attendees the ins and outs of the [Arduino](http://www.arduino.cc)
microcontroller platform.

This workshop, *Getting Started With Arduino*, walks through the process of building up an Arduino
sketch from scratch. At the end, this sketch reads values from three potentiometers and uses them to
control the red, green, and blue intensities of a light-emitting diode using pulse-width modulation.
The sketches in this package represent the progression of concepts as introduced in the workshop.

Minimum Requirements
====================

* An Arduino board (http://arduino.cc)
* The Arduino software (http://arduino.cc)

I've tested these sketches using an Arduino Uno and Arduino 1.0.1 on Mac OS X 10.8.2 and **nothing
else**.

Installation
============

Refer to the installation instructions on the Arduino website to install the development
environment.

No installation is specifically required to build and run these sketches short of placing this
entire repository, directory structure and all, in a subdirectory of the Arduino sketchbook named
`GettingStartedWithArduino`.

There should be plenty of online documentation describing this process.

Usage
=====

* Open the Arduino environment
* Connect your Arduino board to your computer
* Select the proper board type and communication port in the Arduino environment
* Open the specific sketch to be run from the sketchbook
* Press play

The usage of each individual sketch depends on the functionality it exposes. See below.

Sketch Progression
==================

These sketches fit the progression of IUP's *Getting Started With Arduino* workshop. The specific
details regarding the circuit used in each step as well as the code progression are contained within
the supporting workshop materials, notably the workshop outline and slides.

The workshop materials may be downloaded from my [Dropbox archive](https://www.dropbox.com/s/9cehrvjew7wksh5/GettingStartedWithArduino.zip?dl=1).

A brief description of the sketch progression is provided below.

1. `BlinkOnboardLed` - The basic Arduino example, blinks the built-in LED on digital pin 13
2. `BlinkOneLed` - Changes `HelloArduino` to blink an external LED on digital pin 11
3. `DimOneLed` - Changes `BlinkOneLed` to dim the external led on digital pin 11 with PWM
4. `DimOneLedWithPots` - Changes `DimOneLed` to set the LED brightness from a pot on analog pin 0
5. `DimThreeLedsWithPots` - Changes `DimOneLedWithPots` to support LEDs on digital pins 10 and 9
   using pots on analog pins 1 and 2

Tests
=====

No unit tests are provided with the source distribution at this time.

Uninstallation
==============

To uninstall GettingStartedWithArduino, simply remove the `GettingStartedWithArduino` directory,
subdirectories, and files from the Arduino sketchbook.

Improvements
============

There are a few things I'd like to do:

* It might be nice to add an "advanced" version of the final sketch that places repeated code into
  subroutines to serve as an example of how this might be done

* Similarly using const definitions in the "advanced" version of the final sketch might help

* I've thought about making the third sketch, `DimOneLed`, actually oscillate the LED between low
  and high brightness to better illustrate the dramatic difference; this would place it closer to
  the `BlinkOneLed` sketch in terms of code but would make for a tougher transition to the
  `DimOneLedWithPots` sketch later on

* It would also be nice to find a place to host the slides and outline that isn't my Dropbox

Author
======

Jon Speicher ([jon.speicher@gmail.com](mailto:jon.speicher@gmail.com))

Contributors and Attribution
============================

This work is derived in part from the *Intro to Programming The Arduino* Code, which is a project of
[HackPittsburgh](http://www.hackpittsburgh.org) by Jon Speicher
([jon.speicher@gmail.com](mailto:jon.speicher@gmail.com)), located at
https://github.com/jonspeicher/PhysicalPixels.

The IUP workshop, as well as the original HackPittsburgh workshop, were created and refined thanks
to the hard work and input of a number of talented people:

* Bevin Baker
* Rich Bates
* Sean Derry
* Dave Findlay
* Lori Hepner
* Marty McGuire
* Susan Speicher
* Matt Stultz

History
=======

0.1
---

* Initial release

0.2
---

* Arduino 1.0 compatibility

1.0
---

* New sketch progression
  * Removal of serial output sketches as that will be a separate topic in the workshop
  * Put dimming of the LED with a hard-coded value before introduction of the potentiometer
* Reduced sketch complexity and duplicate code
  * Shared variable for pot read value and for LED brightness
* Update attribution and credits for IUP workshop

License
=======

See the file `LICENSE` included with this repository.
