#include <CoDrone.h>

void setup() {
  CoDrone.begin(115200);
  CoDrone.AutoConnect(NearbyDrone);
}

void loop() {
}
