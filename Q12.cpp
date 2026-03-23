/*A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
check the triangle type based on its sides. */
#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter the sides of triangle";
    cin>>s1>>s2>>s3;
    if(s1==s2&&s2==s3)
    cout<<"This is an equilateral triangle";
    else if(s1==s2||s2==s3||s1==s3)
    cout<<"This is an isosceles triangle";
    else
    cout<<"This is a scalene triangle";
    return 0;
}

