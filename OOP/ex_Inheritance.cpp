#include <iostream>

using namespace std;


//Base Class
class Details{
    public:
    int age = 25;
    void run(){
        cout << "I am Running.........";
    }

};

//Base Class
class ParentDetails{
    public:
    string fathername =  "U Hla";
    string mothername =  "Daw Mya";
}

//Derived Class
class Person : public Details ,public ParentDetails {
    public:
        string name = "Mg Hla";
};


int main(){

    Person person;
    cout << person.age;
    cout << person.fathername;
    cout << person.mothername;

    person.run();


    return 0;
}
