#include "IOT_Thing.h"

IOT_Thing::IOT_Thing
(void)
{
}

IOT_Thing::IOT_Thing
(IP_Address arg_connecting)
{
  this->connected = arg_connecting;
}
