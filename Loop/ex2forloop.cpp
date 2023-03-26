#include <iostream>

using namespace std;

int main()
{



    for (int i=0; i <= 5; i++)
    {
        cout << "Hello Thura Lin Htut ";
    }

    cout << endl;

    //Arrary With Loops

    string colors[3] = {"yellow","green","red"};

    for(int c=0; c<3; c++)
    {
        cout << colors[c] << endl;
    }

    cout << sizeof(colors) / sizeof(string);


    //Generate Chemristy Tree;
    int height = 20;

    for(int row=1; row <= height; row++)
    {
        //Space before the star
        for (int space=1; space <= height-row; space++)
        {
            cout << "_";

        }

        //print the star
        for(int star=1; star <= 2*row -1; star++)
        {
            cout << "*";
        }

        cout << endl;

    }

    for (int t=1; t<=height/2; t++)
    {
        for(int j=1; j<= height-1; j++)
        {
            cout << " ";
        }
        cout << "*" <<endl;
    }

    return 0;
}
