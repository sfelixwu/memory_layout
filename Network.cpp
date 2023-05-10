
#include "Network.h"

IP_Address::IP_Address()
{
  this->addr = 0;  
}

IP_Address::IP_Address
(unsigned int arg_ip)
{
  this->addr = arg_ip;
}

unsigned int
IP_Address::getIPaddressValue()
{
  return addr;
}
