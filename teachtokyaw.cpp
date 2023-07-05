#include <iostream>

using namespace std;

int main(){

    int dog = 10;

    while(true){


    cout << "Number of dog: ";
    cin >> dog;


    if(dog >= 11)
        cout << "I will buy";
    else
        cout << "No I don't need that";

    }

    return 0;
}
