class Account
{
public:
  Account() {}
  unsigned long A1;
};

class Employee : virtual public Account
{
public:
  Employee() {}
  unsigned long E1;
};

class Student : virtual public Account
{
public:
  Student() {}
  unsigned long S1;
};

class Work_Study : virtual public Employee, virtual public Student
{
public:
  Work_Study() {}
  unsigned long W1;
};

int
main(void)
{
  Work_Study ws_Felix {};
  return 0;
}
