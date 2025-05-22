#include <stdio.h>
#include <stdlib.h>
class Account
{
public:
  Account() {}
  unsigned long A1;
};

class Employee : public Account
{
public:
  Employee() {}
  unsigned long E1;
};

class Student : public Account
{
public:
  Student() {}
  unsigned long S1;
};

class Work_Study : public Employee, public Student
{
public:
  Work_Study() {}
  unsigned long W1;
};

int
main(void)
{
  Work_Study ws_Felix {};
  ((Student *) (&ws_Felix))->A1 = 20; 
  ((Employee *) (&ws_Felix))->A1 = 40;

  printf("Student A1 = %lu\n", ((Student *) (&ws_Felix))->A1);

  printf(" Work study pointer = %p\n", &ws_Felix);
  printf(" Employee pointer = %p\n", ((Employee *) &ws_Felix));
  printf(" Student pointer = %p\n", ((Student *) &ws_Felix));
  
  return 0;
}
