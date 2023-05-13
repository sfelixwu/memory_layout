
#ifndef _CORE_H_
#define _CORE_H_

// Core.h

#ifndef _HACK_CLANG_
#include <string>
#include <stdio.h>

using namespace std;
// c library
#include <arpa/inet.h>
#endif /* _HACK_CLANG_ */

class Core
{
 private:
 public:
  unsigned int class_id;
  Core(void);
  virtual void xyz() {}
};

#endif  /* _CORE_H_ */
