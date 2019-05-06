# Hand-Gesture
Robots are controlled using hand gesture because robots
need a helping hand whether it may be any function, without
human robots cannot be operated. The main purpose of
using hand gestures is that it provides a more schematic
way of controlling the robot and with this feature robot can
be used as a wheelchair or as a spy robot or for vigilance. As
human hand gestures are natural, with the help of wireless
communication, it is easier to interact with the robot in a
more-friendly way. The robot’s movement depends on the
gestures made by hand. The objective of this paper is to
build a wireless, hand gesture controlled robot using an
Arduino Uno, an accelerometer, and a RF transmitter and a
RF receiver set. The Arduino Uno microcontroller reads the
analog output values i.e., x-axis and y-axis values of the
accelerometer and converts that analog value to respective
digital value. The values are given a specific function by the
use of the Arduino software. The digital values are processed
by the Arduino Uno microcontroller and according to the tilt
of the accelerometer sensor mounted on the hand, it sends
the commands to the RF transmitter which sends the signal
to the receiver and there these signals are processed by the
receiver end which drives the motor to a particular direction
in which we have set it to move. The robot moves forward,
backward, right and left when we tilt our palm to forward,
backward, right and left respectively and the robot stops
when our palm is parallel to the ground.

## Components

### Arduino nano
Arduino nano It is a microcontroller board based on
ATmega328 which has 14 digital I/O and 6 analog pins. It
has everything that is needed to support the microcontroller.
Simply connect it to the computer with a USB cable to get
started with the Arduino Uno board. It is flexible, easy to use
hardware and software. Arduino nano can sense the
environment by receiving input from a variety of sensors
and can affect its surroundings by controlling lights, motors,
and other actuators.

### Accelerometer (ADXL335)
The ADXL335 is a small, thin, low power, complete 3-axis
accelerometer with signal conditioned voltage outputs. It has
5 pins. 3 pins is for X, Y, Z axis. First pin for power supply
(VCC), second pin for ground (GND). It operates on 3.3V from the Arduino Uno board. X
and Y axis pins are connected to A0 and A1 pin of Arduino
Uno board respectively. It can measure the static acceleration
of gravity from tilt sensing applications as well as dynamic
acceleration resulting from motion, shock or vibration and
gives corresponding analog values through X, Y, Z axis pins.

### RF Transmitter & Receiver
The transmitter module is working on the frequency of
433MHz. In the circuit, Vcc pin is connected to the + terminal.
The data pin is connected to the HT12E (Encoder) that is
transmitted or we can say that encoded data. The next pin
is GND that is connected to the ground terminal. Now the last
pin ANT this is connected to a small wire as an antenna.
The RF receiver module will receive the data which is
transferred by the gesture device. It is also working as similar
to the transmitter module- Connect the +Vcc pin to the 5volt
terminal. Connect the ground pin to the ground terminal .The
data pin is then connected to the HT12D (Decoder) .So that
we can get the decoded 4 bit data.

### Motor Driver
Motor Driver works on the concept of H-bridge. H-bridge is a
circuit which allows the voltage to flow in either direction. As
voltage need to change its direction for being able to rotate
the motor in clockwise or anti-clockwise direction. Therefore
H-bridge IC is ideal for driving a DC motor. In a single L293D
chip there are two h-Bridge circuit inside the IC which can
rotate two dc motor independently. Due to its size it is very
much used in robotic application for controlling DC motors.

### DC Motor
DC motor is used for the conversion of direct current into
mechanical motion. The mechanical motion could be rotary
or linear. The operation of DC motor is based on the principle
that when a current carrying conductor is placed in a
magnetic field, the conductor experiences a mechanical force.
The speed of a DC motor can be controlled by changing the
voltage applied to the armature or by changing the field
current. DC motors can be used for the movement of the
robotic car.

### Battery
A battery is a device consisting of one or more
electrochemical cells. A battery is device that directly
converts chemical energy to the electrical energy. The
purpose of battery is to supply 12 volts to operateDC motors.
