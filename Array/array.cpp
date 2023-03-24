#include <iostream>
#include <string>

using namespace std;
int main(){


    int IntegerArray[3] = {1,2,3}; //Integer
    cout << IntegerArray << endl; // It will output only memory address;
    cout << IntegerArray[1] << endl;

    string StringArray[10] = {"a","b","c","d","e","f","g","h","i","j"};
    cout << StringArray << endl; //output : memory address
    cout << StringArray[5] << endl; // Array Index 5

    //For Loop
    for(int i=0; i < 10; i++){
        cout << i << " = "<< StringArray[i] << endl;
    }

    //While Loop

    int a = 0;
    while(a < 10){
        cout <<a <<" = " << StringArray[a] << endl;
        a++;
    }

    //For Each Loop
    for(string loop : StringArray){
        cout << loop;
    }

    cout << endl;

    //Change Array Value
    string foods[5] = {"banana","pineapple","mango","apple","orange"};
  
    for(string food:foods){
        cout <<food <<", ";
    }

    cout << endl;
    
    cout << foods[0] << endl;
    cout << foods[1] << "\n \n";

    foods[0] = "mango";
    foods[1] = "apple";

    cout << foods[0] << endl;
    cout << foods[1] << endl;

    // Show All Foods Array
    for(string food:foods){
        cout <<food <<", ";
    }

    return 0;
}
