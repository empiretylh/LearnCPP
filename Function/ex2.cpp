#include <iostream>

using namespace std;

//Change Data using memory address
void CHANGE_VALUE(int &x, int &y){

    int z =x;
    x = y;
    y = z;
}

int main(){
  int number1 = 32;
  int number2 = 45;


  cout << "Before Swap: \n" << number1 << " " << number2 << endl;
  CHANGE_VALUE(number1,number2);

  cout << "After Swap: \n" << number1 << " " << number2 << endl;




}
