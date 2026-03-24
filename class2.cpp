#include<iostream>
using namespace std;
class Student{
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public:
    void inputdetails() //setter
    {
        cout<<"\n Enter rollNo,name,marks1,marks2,marks3";
        cin>>rollNo>>name>>marks1>>marks2>>marks3;
    }
    int calculateTotal() //getter
    {
        return(marks1+marks2+marks3);

    }
    void displayDetails() //getter
    {
        cout<<"\n name:"<<name<<"\n rollNO:"<<rollNo;
        cout<<"\n Marks1:"<<marks1<<"\n Marks2:"<<marks2<<"\n Marks3:"<<marks3;
        cout<<"\n Total:"<<calculateTotal();
    }
};

int main(){
    Student s1;
    s1.inputdetails();
    s1.displayDetails();
    Student s2;
    s2.inputdetails();
    s2.displayDetails();

}