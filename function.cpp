#include<iostream>
using namespace std;
void welcome(string name){
    cout<<"WELCOME"<<name;
}
int sum(int num1,int num2){
    int add=num1+num2;
    return add;
}
float sum(float num1,float num2){
    float add=num1+num2;
    return add;
}
double sum(double num1,double num2){
    double add=num1+num2;
    return add;
}

int main(){
    welcome("Pooja");
    cout<<"\n"<<sum(10,11);
    cout<<"\n"<<sum(12.11,14.85);
    cout<<"\n"<<sum(1.0987644,2.3546577);
    return 0;
}



