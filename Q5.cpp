/*A student wants to swap the values of two variables for practising coding basics. 
Implement a solution to swap two numbers using different techniques.*/
#include<iostream>
using namespace std;
int main(){
    int num1=100,num2=88;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<num1<<" "<<num2;
    return 0;

}