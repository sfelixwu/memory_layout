
#ifndef _THING_H_
#define _THING_H_

// Thing.h

#include "Core.h"
#include "GPS.h"

class Thing : public virtual Core
{
 private:
 protected:
 public:
  
  unsigned int model;
  unsigned int sequence_num;
  GPS_DD       location;
  
  Thing(void);
};

#endif /* _THING_H_ */
