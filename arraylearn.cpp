#include <iostream>

using namespace std;

int main()
{
    string teststring[4] = {"thu","a","b","c"};

    cout << "Hello Array" << teststring << endl;

    teststring[2] = "something";
    cout << teststring[2] << endl;

    //Multidimensional Array
    int  twodarray[5][6] =
    {
        {0,0,0,0,0},
        {0,0,0,0,03},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
    };

    cout << twodarray[0][2] << endl;


    //Thre dimensional Array
    int threedarray [2][2][2] =   // 1 D
    {
        //0
        {

            {1,2},
            {2,3}
        },
        //1
        {
            {1,3},
            {8,7}
        }
    };

    cout << threedarray[0][0][1];

    return 0;
}
