#include <iostream>

using namespace std;

int main()
{
    try
    {
        int age = 15;

                  if(age >= 18)
        {
            cout << "You are old enough.";
        }
        else
        {
            throw (age);
        }
    }
    catch(int myNum)
    {
        cout <<"You must be at least 18 years old.\n";
    }


    return 0;
}
