#include<iostream>
using namespace std;
class Car{
    string brand;
    int make_year;
    string color;
    public:
    string car_type;
    void display(){
        cout<<"\n Brand of the car"<<brand;
         cout<<"\n Make year of the car"<<make_year;
          cout<<"\n Type of the car"<<car_type;
    }
    void car_entry(){
         cout<<"\n Enter brand, make year, car type, color";
         cin>>brand>>make_year>>car_type>>color;
    }
   };
 int main(){
        Car c1;
        c1.car_entry();
        c1.car_type="Hatch back";
       //maruti c1.brand="ABC";
        c1.display();
        return 0;
    }

