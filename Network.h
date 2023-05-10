
#ifndef _NETWORK_H_
#define _NETWORK_H_

// Network.h
#include "Core.h"

class IP_Address
{
 private:
  unsigned int addr;
 public:
  IP_Address();
  IP_Address(unsigned int);
  unsigned int getIPaddressValue();
};

#endif  /* _NETWORK_H_ */
