#include <iostream>

using namespace std;

void changeValue(int *address){
  *address = 4;

}


int main(){
    int value = 1;



    cout << &value << endl;

   // changeValue(&value);

    cout << value;
   // int *store = &value;

   // cout << *store;


return 0;

}

