#include <iostream>

using namespace std;

//Using Constructor
class Clock
{
public:
    Clock()
    {
        cout << "Ticking ... ";
    }

};

//Constructor Parameters
class Car
{
public:
    string brand; //Attribute
    string model;
    int year;

    Car(string x,string y,int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};



int main()
{

    Clock clock;

    Car carObj1("BMW","X5",1999);
    Car carObj2("Ford","Mustang",1969);


    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}
