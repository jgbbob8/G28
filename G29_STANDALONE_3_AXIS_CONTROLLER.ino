// G29 STANDALONE USB 3 AXIS-CONTROLLER 
// Use with Arduino Leonardo or ProMicro (ATmega32U).
// Install Joystick library

// By Bob8

// Wiring
// DB9 -  ProMicro 
// 1   -  GND
// 2   -  A2
// 3   -  A1
// 4   -  A0
// 6   -  VCC
// 9   -  VCC

// Copyright _ Non Commerical_ Not for Resale https://creativecommons.org/licenses/by-nc-nd/4.0/ 

#include <Joystick.h>

Joystick_ Joystick;

int RyAxis_ = 0;  
int RzAxis_ = 0;          
int Throttle_ = 0;         

const bool initAutoSendState = true; 

void setup()
{
      Joystick.begin();
  }
   
void loop(){
 
 RyAxis_ = analogRead(A0);
 RyAxis_ = map(RyAxis_,0,1023,255,0);
 Joystick.setRyAxis(RyAxis_);

 RzAxis_ = analogRead(A1);
 RzAxis_ = map(RzAxis_,0,1023,255,0);            
Joystick.setRzAxis(RzAxis_);
  
Throttle_ = analogRead(A2);
Throttle_ = map(Throttle_,0,1023,255,0);         
Joystick.setThrottle(Throttle_);                
 
delay (50);
}

//Bob8 Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.



