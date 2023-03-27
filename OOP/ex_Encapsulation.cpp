#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    string getName()
    {
        return name;
    }
    void setName(string n)
    {
        name = n;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age = a;
    }

};


int main ()
{

//Encapsulation
    Person p1,p2,p3;
    p1.setName("Thura Lin Htut");
    p1.setAge(18);

    p2.setName("Mg Mg");
    p2.setAge(18);

    p3.setName("Hla Hla");
    p3.setAge(18);

    cout << p1.getName() << endl;
    cout <<  p2.getName() << endl;
    cout <<  p3.getName() << endl;

    return 0;

}
