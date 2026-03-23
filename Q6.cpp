 /*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
display results. */
#include<iostream>
using namespace std;
int main(){
    int number;
    int salary;
    cout<<"ENTER THE NUMBER OF EMPLOYEES AND THERE BASIC SALARY";
    cin>>number>>salary;
    float bonus = salary*0.12;
    float net = salary+bonus;
    cout<<"BONUS: "<<bonus<<" SALARY: "<< net;
    return 0;
}