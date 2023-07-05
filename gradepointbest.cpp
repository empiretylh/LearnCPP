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

        if(myan >= 80) // ၈၀ ရရင် ဂုဏ်ထူးထွက် myanmar စာ
            cout << "You get Distinction on Myanmar" << endl;
        if (eng >= 80) // ၈၀ ရရင် ဂုဏ်ထူး  English
            cout << "You get Distinction on English" << endl;
        if (math >= 80) // ၈၀ ရရင် ဂုဏ်ထူးထွက် Math
            cout << "You get Distinction on Math" << endl;

        if (myan < 80 && eng < 80 && math < 80)
           cout << "You have no Distinction" << endl;

    }
    else
    {
        cout << "You Failed The Exam." << endl; // ၄၀ အောက်ဆိုကျသည်။
    }

    return 0;
}
