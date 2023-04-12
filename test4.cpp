#include <iostream>

using namespace std;
int main()
{
    int a = 50;
    cout << &a << endl;
    int* b = &a;

    cout << *b << endl;
    cout << "Hello World ";
    return 0;
}
