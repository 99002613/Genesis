#ifndef __ENGINEER_H
#define __ENGINEER_H
#include <string>
#include "employee.h"
using namespace std;

class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string id, std::string name, double salary,int exp,int code);
  double payroll();
  double appraisal();


};

#endif
