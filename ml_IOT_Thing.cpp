
#include "IOT_Thing.h"

int
main(void)
{
  Thing *thing_ptr;
  Core *core_ptr;

  void *genric_ptr;
  
  IOT_Thing myIOTThing {};

#ifndef _HACK_CLANG_
  printf("myIOTThing address %p size %lu\n", &myIOTThing, sizeof(myIOTThing));
  printf("myIOTThing            connected %p\n", &(myIOTThing.connected));

  thing_ptr = &((Thing&) myIOTThing);
  printf("Thing      address %p size %lu\n", thing_ptr,   sizeof(*thing_ptr));
  printf("Thing      location %p\n", &(thing_ptr->location));
  printf("Thing      location %p\n", &(myIOTThing.location));
  

  core_ptr = &((Core&) myIOTThing);
  printf("Core       address %p size %lu\n", core_ptr,    sizeof(*core_ptr));
#endif /* _HACK_CLANG_ */

  return 0;
}
