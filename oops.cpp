#include<iostream>
using namespace std;
class Employee{
    private:
    int empID;
    string name;
    double monthlySalary;
    public:
    void inputDetails(){
        cout<<"Enter employee ID:";
        cin>>empID;
        cout<<"Enter employee name:";
        cin>>name;
        cout<<"Enter the monthly salary:";
        cin>>monthlySalary;
    }
    double calculateAnnualSalary(){
        return monthlySalary*12 ;
    }
    void displayDetails(){
        cout<<"Employee Details";
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Annual salary: "<<calculateAnnualSalary()<<endl;
    }

};
int main(){
   Employee e1;
   e1.inputDetails() ;
   e1.calculateAnnualSalary();
   e1.displayDetails();
   return 0;
}