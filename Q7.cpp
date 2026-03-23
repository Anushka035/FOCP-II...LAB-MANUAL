 /*A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
and identify the winner. */
#include<iostream>
using namespace std;
int main(){
    cout<<"GIVE THE SCORE OF THE FOLLOWING PLAYERS";
    int p1,p2,p3;
    cout<<"\nPlayer1:";
    cin>>p1;
    cout<<"\nPlayer2:";
    cin>>p2;
    cout<<"\nPlayer3:";
    cin>>p3;
    if(p1>p2&&p1>p3)
    {cout<<"The winner is Player1";}
    else if(p2>p3&&p2>p1)
    {cout<<"The winner is Player2";}
    else{cout<<"The winner is Player3";}
    return 0;
}