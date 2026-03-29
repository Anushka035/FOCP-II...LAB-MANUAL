#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter values";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    int secondLargest = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    for(int i = 0; i < 5; i++) {
        if(arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest value = " << largest << endl;
    cout << "Second largest value = " << secondLargest << endl;

    return 0;
}
