#include <iostream>

using namespace std;

int main()
{
    int hour;
    cout << "Your prefer time : ";
    cin >> hour;

    if(hour < 12)
    {
        cout << "Good Morning" << endl;
    }
    else if(hour < 15)
    {
        cout << "Good Afternoon" << endl;
    }
    else if(hour < 18)
    {
        cout << "Good Evening" << endl;
    }else{
        cout << "Nothing" << endl;
    }


    return 0;
}
