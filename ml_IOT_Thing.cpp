
#include "IOT_Thing.h"

int
main(void)
{
  IOT_Thing *IOT_thing_ptr;
  Thing *thing_ptr;
  Core *core_ptr;
  void *genric_ptr;

  void *IOT_thing_vtable_ptr;
  void *core_vtable_ptr;
  
  IOT_Thing myIOTThing {};

#ifndef _HACK_CLANG_
  printf("*** Dumping AST Record Layout\n");
  printf("%8ld | class IOT_Thing\n", ((long) ((IOT_Thing *) 0)));
  printf("%8ld |   (IOT_Thing vtable pointer)\n", ((long) ((IOT_Thing *) 0)));
  printf("%8ld |   class IP_Address connected\n", ((long) (&((IOT_Thing *) 0)->connected)));

  printf("*** ecs36b Dumping AST Record Layout\n");
  printf("%8ld | %8p | class IOT_Thing\n",
	 ((long) ((IOT_Thing *) 0)), &myIOTThing);
  printf("%8ld | %8p |  (IOT_Thing vtable pointer)\n",
	 ((long) ((IOT_Thing *) 0)), &myIOTThing);
  printf("%8ld | %8p |  class IP_Address connected\n",
	 ((long) (&((IOT_Thing *) 0)->connected)),
	 &(myIOTThing.connected));

  IOT_thing_ptr = &myIOTThing;
  core_ptr = &((Core&) myIOTThing);
  printf("%8ld | %8p |  class Core\n",
	 ((long) core_ptr) - ((long) IOT_thing_ptr), core_ptr);
  printf("%8ld | %8p |  (Core vtable pointer)\n",
	 ((long) core_ptr) - ((long) IOT_thing_ptr), core_ptr);

  return 0;
  

  // IOT_thing_vtable_ptr = (void *) (*((long *) IOT_thing_ptr));
  // core_vtable_ptr = (void *) (*((long *) core_ptr));
  // printf("%8p %8p\n", IOT_thing_vtable_ptr, core_vtable_ptr);
  
  // printf("myIOTThing address %p size %lu\n", &myIOTThing, sizeof(myIOTThing));
  // printf("myIOTThing            connected %p\n", &(myIOTThing.connected));

  // thing_ptr = &((Thing&) myIOTThing);
  // printf("Thing      address %p size %lu\n", thing_ptr,   sizeof(*thing_ptr));
  // printf("Thing      location %p\n", &(thing_ptr->location));
  // printf("Thing      location %p\n", &(myIOTThing.location));
  
  // core_ptr = &((Core&) myIOTThing);
  // printf("Core       address %p size %lu\n", core_ptr,    sizeof(*core_ptr));
#endif /* _HACK_CLANG_ */

  return 0;
}
