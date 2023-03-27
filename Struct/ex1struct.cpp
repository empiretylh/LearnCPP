#include <iostream>

using namespace std;

int main()
{

    //Simple Structure
    struct {
        string name;
        int age;
        int height;
    } person;


    person.name = "Thura Lin Htut";
    person.age = 18;
    person.height = 6;

    cout << person.name << " \n";
    cout << person.age << "\n";
    cout << person.height << "\n";

    return 0;
}
