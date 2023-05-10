
#ifndef _ANOTHER_THING_H_
#define _ANOTHER_THING_H_

// Another_Thing.h

#include "Core.h"
#include "GPS.h"

class Another_Thing : public virtual Core
{
 private:
 protected:
 public:
  
  unsigned int model;
  unsigned int sequence_num;
  GPS_DD       location;
  
  Another_Thing(void);
};

#endif /* _ANOTHER_THING_H_ */
