#include<iostream>
using namespace std;
void computePerformance(int m[],int n)
{
    int i;
    int min=m[0],max=m[0],sum=0;
    float avg=m[0];
    for(i=1;i<n;i++)
    {
        if(m[i]>max) max=m[i];
        if(min>m[i]) min=m[i];
        sum+=m[i];
    }
    avg=(float)sum/n;
    cout<<"\n Avg="<<avg/n;
    cout<<"\n Min="<<min;
}
int main(){
    int marks[10]={10,20,30,40,50,60,70,80,90,35};
    computePerformance(marks,10);
    return 0;
}