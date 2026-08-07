#include<iostream>
using namespace std;

class Employee
{
public:
int empID;
string name;
float salary;

void accept()
{
cout<<"Enter Employee ID: ";
cin>>empID;

cout<<"Enter Name: ";
cin>>name;

cout<<"Enter Salary: ";
cin>>salary;
}

void display()
{
cout<<"\nEmployee ID: "<<empID;
cout<<"\nName:"<<name;
cout<<"\nSalary:"<<salary;
}
};
int main()
{
Employee e;
e.accept();
e.display();
return 0;
}
