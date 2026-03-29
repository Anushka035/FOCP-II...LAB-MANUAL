/*A payroll system maintains employee salary records. Implement a solution to accept salary of 
10 employees in an array, compute total salary and average salary, then display the result. */
#include<iostream>
using namespace std;
int main(){
    int salary[10];
    int sum=0;
    for(int i=0;i<10;i++){
      cout<<"\nEmployee"<<i+1;
      cin>>salary[i];
      sum=sum+salary[i];  
    }
    float avg=sum/10.0;
    cout<<"\n Total sum:"<<sum<<"\n Average:"<<avg;
    return 0;
}