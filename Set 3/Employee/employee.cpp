#include <iostream>
#include "employee.h"
#include "manager.h"
#include "trainee.h"
#include "engineer.h"

using namespace std;



Employee::Employee(std::string id, std::string name, double salary,int exp):
     m_empid(id),m_name(name),m_salary(salary),m_exp(exp){}

Manager::Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees):
     Employee(id,name,salary,exp), m_projCode(code), m_reportees(reprtees){}

Trainee:: Trainee(std::string id, std::string name, double salary,int exp,std::string track_code,double score):
     Employee(id,name,salary,exp),m_track(track_code),scores(score){}

Engineer::Engineer(std::string id, std::string name, double salary,int exp,int code):
     Employee(id,name,salary,exp),m_projCode(code){}

void Employee::display(){
    cout<<m_empid<<" "<<m_name<<" "<<m_salary<<" "<<m_exp<<endl;
}

int Employee::salary()
{
    return m_salary;
}

double Manager::payroll(){
    int pay = salary();
    cout<<pay<<endl;
    return pay;
}

double Manager::appraisal(){
    int pay = salary();
    int app = 0.15*pay;
    cout<<app<<endl;
    return app;
}

double Trainee::payroll(){
    int pay2 = salary();
    cout<<pay2<<endl;
    return pay2;
}

double Trainee::appraisal(){
    int pay2 = salary();
    int app2=0;
    if (scores>50)
        app2 = 0.05*pay2;
    else
        app2 = 0;
    cout<<app2<<endl;
    return app2;
}

double Engineer::payroll(){
    int pay3 = salary();
     cout<<pay3<<endl;
     return pay3;
}

double Engineer::appraisal(){
    int pay3 = salary();
    int app3 = 0.10*pay3;
    cout<<app3<<endl;
    return app3;
}



