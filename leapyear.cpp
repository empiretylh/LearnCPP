#include <iostream>

using namespace std;


int main(){

    int year, leap;
    while(true){
    cout << "Enter a year (****) \n";
    cin >> year;

    if (year%4 != 0){
        leap = false;
    }else if(year%100 != 0){
        leap = true;
    }else if(year%100 != 0){
            leap = true;
    }else {
        leap = false;
    }

    if(leap){
        cout << year << "is a leap year.\n";
    }else{
        cout << year << "is not a leap year.\n";
    }
}

return 0;
}
