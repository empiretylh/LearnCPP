#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream WriteFile("test.txt");

    WriteFile << "Test File Successfully Created \n";
    for(int i=0; i < 10; i++)
    {
        WriteFile << "Thura Lin Htut is the best\n";
    }


    cout << "Successfully Created File \n" ;

    WriteFile.close();

//Read The File
    ifstream ReadFile("test.txt");
    string text;

    while(getline(ReadFile,text))
    {
        cout << text << "\n";
    };

    ReadFile.close();
}
