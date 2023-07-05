#include <iostream>

using namespace std;

int main()
{

    int myan, eng, math;

    cout << "Enter Myanmar Mark : ";
    cin >> myan;

    cout << "Enter English Mark : ";
    cin >> eng;

    cout << "Enter Math Mark : ";
    cin >> math;

    if(myan >= 40 && eng >= 40 && math >= 40) // 40 နှင့် 40 အထက်မှအောင်မည်။
    {
        cout << "You pass the Exam" << endl;

        if(myan >= 80 || eng >= 80 || math >= 80) // ဘယ်ဘာသာမှာ ဂုဏ်ထူးရရ "You get Distinction" လို့ပြမည်။
            cout << "You get Distinction";

    }
    else
    {
        cout << "You Failed The Exam." << endl; // ၄၀ အောက်ဆိုကျသည်။
    }

    return 0;
}
