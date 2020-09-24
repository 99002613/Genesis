#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
#include <string>
using namespace std;


class IEmployee {
  public:
  virtual double payroll()=0;
  virtual double appraisal()=0;
};


class Employee:public IEmployee {
  std::string m_empid;
  std::string m_name;
  double m_salary;
  int m_exp;
  public:
  Employee(std::string id, std::string name, double salary,int exp);
  void display();
  int salary();
};

#endif
