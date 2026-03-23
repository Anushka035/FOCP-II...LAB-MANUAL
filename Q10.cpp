/*A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a 
leap year or not. */
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year%4==0&&year%100!=0)
    cout<<"This is leap year";
    else
    cout<<"Not a leap year";
    return 0;
}