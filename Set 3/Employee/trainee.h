#ifndef __TRAINEE_H
#define __TRAINEE_H

#include "employee.h"
#include <string>
using namespace std;

class Trainee : public Employee {
  std::string m_track;
  double scores;
  public:
  Trainee(std::string id, std::string name, double salary,int exp,std::string track_code,double score);
  double payroll();
  double appraisal();

};

#endif
