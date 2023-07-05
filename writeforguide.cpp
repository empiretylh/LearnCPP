#include <iostream>

using namespace std;

void increment(int* num){

    (*num)++;
}


int main(){

 int value = 1;

 int *s = &value;

 cout << "Memory Address of Value :" << value << endl;

 int number = 90;
 cout << &number << endl;


string text = "Hello Pointers";
cout << &text; //output: 0x7ffc829f73c2


 increment(&value);
 cout << value;

return 0;

}
