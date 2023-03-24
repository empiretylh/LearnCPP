#include <iostream>
#include <string>


using namespace std;

int main ()
{
    //Concatenation String
    string firstname = "Thura Lin";
    string lastname = "Htut";
    string fullname = firstname +" "+ lastname;

    cout << fullname << endl;

    string fullname1 = firstname.append(" "+lastname);

    cout << fullname1 << endl;

    //Number With String
    string x = "24";
    string y = "60";
    string sum = x + y;

    cout << sum << endl;

    //String Length
    string txt = "abcdefghijkl mnopqrstuvwxyz";
    cout << "The length of the txt : " << txt.length() <<" "<< txt.size()  <<  endl;

    //Access to the string
    string HELLO = "Hello";
    cout << HELLO[2] << endl;

    //Special Characters \"'
    // My name is "Thura Lin Htut";
    string SpecialCharacter = "It\'s alrgiht. My name is \"Thura Lin Htut\"";

    cout << SpecialCharacter<< endl;

    //User Input String
    string username;
 //   cout << "What is your name (using cin) :";
   // cin >> username; //cin only single word
   // cout << "Your name (using cin) is : " << username << "\n \n";

    cout << "What is your name (using getline) :";
    getline(cin,username);
    cout << "Your name (using getline) is : " << username;


    return 0;
}
