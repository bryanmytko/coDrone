#include <CoDrone.h>

void setup() {
  CoDrone.begin(115200);

  CoDrone.AutoConnect(NearbyDrone);
  CoDrone.FlightEvent(TakeOff);
  delay(500);

  THROTTLE = 10;
  PITCH = 0;
  ROLL = 0;
  YAW = 0;
  CoDrone.Control();
  delay(500);

  CoDrone. FlightEvent(Landing);
  delay(500);

}

void loop() {
}
