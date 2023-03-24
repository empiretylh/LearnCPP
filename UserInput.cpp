#include <iostream>

using namespace std;

int main()
{
    int x= 5;
    int y= x;
    cout << y;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type y number : ";
    cin >> y;
    cout << "Your Number is: " << x+y;

    return 0;
}
