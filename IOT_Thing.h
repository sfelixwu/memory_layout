
#ifndef _IOT_THING_H_
#define _IOT_THING_H_

// IOT_Thing.h
#include "Thing.h"
#include "Network.h"

#ifdef _VIRTUAL_THINGS_
#include "Another_Thing.h"

class IOT_Thing: public virtual Thing, public virtual Another_Thing
#else  /* _VIRTUAL_THINGS_ */
class IOT_Thing: public virtual Thing
#endif /* _VIRTUAL_THINGS_ */
{
 private:
 protected:
 public:
  IP_Address connected;
  IOT_Thing(void);
  IOT_Thing(IP_Address arg_connecting);
  virtual void xyz() {}
};

#endif /* _IOT_THING_H_ */
