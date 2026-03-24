
#include<iostream>
using namespace std;
int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int no1=5,no2=10;
    cout<<"Before swapping: no1="<<no1<<", no2="<<no2;
    swap(no1,no2);
    cout<<"After swapping:no1="<<no1<<", no2="<<no2;

}
// we have to use f after the number like 12.5f for float case 