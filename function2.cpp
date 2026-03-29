#include<iostream>
using namespace std;
void welcome(string name=" user"){
    cout<<"\n Welcome"<<name;
}
int main(){
    welcome();
    welcome("Section A");
    return 0;
}