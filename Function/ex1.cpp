#include <iostream>

using namespace std;


void hello(){
    cout << "Hello"<< "\n";
    int a = 4;

    int b = 5;

    cout << a + b << "\n";
}

void run(){
    cout << "I am Running;;;;;;;;;;;; \n";
}
//Function with Multiple Parmeters
void SUM(int number1,int number2){
    cout << "Sum Value is : "<< number1 + number2;
}

int main ()
{
   hello();
   hello();
   run();
   SUM(34,58);

   return 0;
}
