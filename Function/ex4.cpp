#include <iostream>

using namespace std;

int so;
void getData();
void DisplayData();

int main(){

 getData();
 DisplayData();

 return 0;
}

void getData(){
 cout << "Enter Data : ";
 cin >> so;
}

void DisplayData(){
    cout << so;
}
