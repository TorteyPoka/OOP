#include <iostream>
using namespace std;

class Department
{

};
class Employee
{
    protected:
    string name;
    string designation;
    string deptName;
    float grossSalary;
    float NetSalary;
    int baseSalary;
   
public:
float cal_gross_salary (int allowance)
{
    return grossSalary = baseSalary * (float(allowance/100));
}

public:
float calcNetSalary (int abscentDays, int days_of_month)
{
    return NetSalary = grossSalary * (abscentDays * (baseSalary/days_of_month));
}


};
class Student
{

};
class Lecturer : public Employee
{
    public:
    Lecturer (int baseSalary)
    {
    this-> baseSalary = baseSalary;
    }
};
class LProfessor : public Employee
{

};
class AProfessor : public Employee
{

};
class TA : public Student , public Employee
{

};




int main ()
{
    Lecturer lec(40000), lec1(40000);

    cout << "Lecturer's gross salary is " << lec.cal_gross_salary(7) <<  endl;

    cout << "Lecturer's Net Salary is " << lec.calcNetSalary(6, 31) << endl;


    return 0;
}