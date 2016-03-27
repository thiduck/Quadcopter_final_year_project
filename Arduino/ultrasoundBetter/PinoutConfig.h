//
//  PinoutConfig.h
//  
//
//  Created by Shyam Ravikumar on 26/03/16.
//
//


#ifndef PinoutConfig_h
#define PinoutConfig_h

//A=Front, B= Back, C= Left, D= Right

//Motors ( 4 Gnd, 4 Digital)
#define motorA 3
#define motorB 4
#define motorC 5
#define motorD 6

//Ultrasound Sensors ( 4 Gnd, 4 VCC, 2 Dig each)
#define ultraTrigPinA 10
#define ultraTrigPinB 11
#define ultraTrigPinC 12
#define ultraTrigPinD 13
#define ultraEchoPin 9

//Accelerometer ( 1 Gnd, 1 VCC, 1 Dig, 2 Analog)
#define gyrointPin 2
#define gyroSCLPin A5
#define gyroSDAPin A4

//Barometer
#define baroSCL 8
#define baroSDA 7



#endif /* PinoutConfig_h */
