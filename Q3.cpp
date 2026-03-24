 /*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
convert Fahrenheit temperature into Centigrade or vice versa.*/
#include<iostream>
using namespace std;

int main() {
    int choice;
    float c, f;

    cout << "1. \nCelsius to Fahrenheit";
    cout << "2. \nFahrenheit to Celsius";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> c;
        f = (c * 9/5) + 32;
        cout << "Temperature in Fahrenheit = " << f;
    }
    else if(choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> f;
        c = (f - 32) * 5/9;
        cout << "Temperature in Celsius = " << c;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}