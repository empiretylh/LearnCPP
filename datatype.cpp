#include <iostream>

using namespace std;

int main(){
    cout <<"Learn Data Type" << endl;

    int number = 1234;
    double decimal = 1.234;
    string letter = "Thura Lin Htut";
    string sdf = " is Created";
    bool isCPP = true; // isCPP = false // Boolean only has true & false
    char Word = 'f';

    string combine = letter + sdf;

    cout << number << " " << decimal << " " << combine << " "  << isCPP <<" "<< Word;

    return 0;
}
