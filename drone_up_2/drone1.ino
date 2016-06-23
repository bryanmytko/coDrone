#include <CoDrone.h>   //Include the CoDrone Library
void setup()
{
  CoDrone.begin(115200);     //Begin the serial connection at (115200bps)
  CoDrone.AutoConnect(NearbyDrone);  //Connect to a nearby CoDrone
  CoDrone.DroneModeChange(Flight);
}

void loop(){}
