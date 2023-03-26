#include <iostream>

using namespace std;

int main ()
{
    //Using While Loop
    cout << "Using While Loop" << endl;
    int i = 0;
    while(i < 10)
    {
        cout << i << endl;
        i++;
    }

    string userinput;
    while(userinput!="exit")
    {
        cout << "Enter your message : ";
        getline(cin,userinput);
        cout << "Your Message is " << userinput << endl;
    }

    return 0;
}
