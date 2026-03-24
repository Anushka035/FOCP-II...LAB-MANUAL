#include<iostream>
using namespace std;
class Student{
    int Roll_no;
    string name;
    int reg_no;
    public:
    int m1,m2,m3;
    void details(){
        cout<<"\n Roll number of student"<<Roll_no;
        cout<<"\n Name of student"<<name;
        cout<<"\n reg_no of student"<<reg_no;}
        void student_details(){
            cout<<"ENTER ROLL NO.,NAME,REGSITRATION";
        cin>>Roll_no>>name>>reg_no;
    }
    void Marks_entry(){
        cout<<"\n marks1 "<<m1;
         cout<<"\n marks2 "<<m2;
          cout<<"\n marks3 "<<m3;
    }
    void Display_result(){
        cout<<"ENTER MARKS1,MARKS2,MARKS3";
        cin>>m1>>m2>>m3;
    }
};

int main()
{
    Student c1,c2;
    c1.student_details();
    c1.Display_result();
    c2.Display_result();
    c2.m2=23;
    c2.student_details();
    return 0;
}
