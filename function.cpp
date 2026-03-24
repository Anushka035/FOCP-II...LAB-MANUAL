#include<iostream>
using namespace std;
void welcome(string name){
    cout<<"WELCOME"<<name;
}
int main(){
    welcome("Pooja");
    return 0;
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
    cout<<sum(10,11);
    cout<<sum(12,14);
    cout<<sum(1,2);
    return 0;
}

void welcome(string name=" user"){
    cout<<"\n Welcome"<<name;
}
int main(){
    welcome();
    welcome("Section A");
    return 0;
}

