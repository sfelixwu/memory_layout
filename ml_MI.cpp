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
  return 0;
}
