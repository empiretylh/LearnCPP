#include <iostream>

using namespace std;

void SUM(int x,int y){
   cout << "Integer SUM : " << x + y << "\n";
}

void SUM(double x, double y){
    cout << "Float SUM : " << x + y << "\n";
}

void SUM(string x, string y, string z = "everything"){
    cout << "String SUM : " << x + y +" "+ z << "\n";
}

int main ()
{
    SUM(34,56);
    SUM(5.6,6.5);
    SUM("appl","e","Nothing");
    return 0;
}
