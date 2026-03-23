/*The school report card system stores subject marks for each student. 
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/
#include<iostream>
using namespace std;
int main()
{
    float mks[5];
    float sum=0;
    cout<<"Enter marks in 5 subjects ";
    for(int i=0;i<5;i++)
    {
        cout<<"\nSUBJECT"<<i+1;
        cin>>mks[i];
        sum=sum+mks[i];
    }
    float percentage = (sum/500)*100;
    cout<<"Total marks: "<<sum<<"\nPercentage obtained: "<<percentage;
    return 0;
}