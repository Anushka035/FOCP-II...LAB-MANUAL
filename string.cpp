#include<iostream>
using namespace std;
int main(){
    string batch="Hello World";
    int vowels=0,numbers=0;
    for(int i=0;i<batch.length();i++){
        char ch=batch[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else if(ch>='0'&& ch<=9){
            numbers++;
        }
    }
    cout<<"number of vowels are "<<vowels<<"\number of numbers are"<<numbers;
}