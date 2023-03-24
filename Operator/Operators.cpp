#include <iostream>

using namespace std;

int main()
{
    //Using Arithmetic Operator--------------------------

    //Using Addition Operator +

    int sum1 = 300;
    int sum2  = sum1 + 250;
    int sum3 = sum2 + 250;

    cout << "Sum 2 : "  << sum2 << ", Sum3 :" << sum3 << endl;

    //Using Subtraction Operator-----------------------
    int sub1 = 528;
    int sub2 = 255;
    int subanswer = sub1 - sub2;

    cout << "Subtraction Answer is : " << subanswer << endl;

    //Using Multiplication Operator *
    int multi1 = 256;
    int multi2 = 52;
    int multianswer = multi1 * multi2;

    cout << "Multiplication Answer is : " << multianswer << endl;


    //Using Division Operator /

    float distance = 10;
    float time = 30;

    float velocity = distance / time;

    cout <<"Division Velocity Answer is : "<< velocity << " m/s"<< endl;

    //Using Plus Plus ++
    int b = 1;
    b++;
    b++;

    cout << "Plus Plus Answer is : " << b << endl;

    //Using Minus Minus --
    int c =5;
    c--;

    cout << "Minus Minus Answer is : " << c << endl;


    //Assignment Operator---------------------------------------
    int people = 25;

    people += 5; //Ouput : 30

    cout << "People : "  << people << endl ;

    people -= 10;

    cout << "Minus People : " << people << endl;

    people *= 5;
    people /= 5;

    cout << "\n \n \n" << endl;

    //Comparison Operators (1 & 0)
    int number1 = 5;
    int number2 = 6;

     cout <<"Number1 : " <<  number1 << endl;
     cout << "Number2 : " << number2 << endl << endl;

     cout << "Equal : " << (number1 == number2) << endl;
     cout << "Not Equal : " << (number1 != number2) << endl;
     cout << "Greater Than : " << (number1 > number2) << endl;
     cout << "Less Than : " << (number1 < number2) << endl;
     cout << "Greater Than Equal: " << (number1 >= number2) << endl;
     cout << "Less Than Equal: " << (number1 <= number2) << endl;


    string s = "car";
    string s2 = "apple";
    cout << (s<s2) << endl;


    // Logical Operators

    // Returns true if both statements are true
    bool isApple = true;
    bool isFood = false;

    cout <<"Is Apple Perfect : " << (isApple && isFood) << endl;

    int height = 5;
    int width = 5;

    cout << "Is Rectangle : " << ((height==width)  && (width==height)) << endl;


    //Returns true if one of the statements is true
    int x = 5;
    cout << "OR Operator " << (x < 6 || x > 6) << endl;


    cout << "Not Operator " << !(x < 6 || x > 6) << endl;

    cout << "Not Operator " << !0 << endl;

    return 0;
}
