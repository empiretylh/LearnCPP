#include <iostream>

using namespace std;

int main (){

    //Condition Test With User Input
    string isAlive;
    cout << "Are you alive? (Yes Or No) : ";
    cin >> isAlive;

    if(isAlive=="Yes"){
        cout << "I am Happy to hear; Good Luck; and Be Healthy" << endl;
    }else{
        cout << "Die" << endl;
    }



    return 0;
}
