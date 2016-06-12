#include <CoDrone.h>
void setup() {
  CoDrone.begin(115200);
 
  CoDrone.AutoConnect(NearbyDrone);
 
    CoDrone.FlightEvent(TakeOff);
    delay(2000);
 
    THROTTLE = 100;
    PITCH = 0;
    ROLL = 0;
    YAW = 0;
    CoDrone.Control();
    delay(1000);
 
    CoDrone.FlightEvent(Landing);
  
}
 
void loop() {
 
}
