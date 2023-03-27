#include <iostream>

using namespace std;


int main ()
{
    //Using Multiple Struct
    struct{
        string name;
        string director;
        string type;
        string mainactor;
        int cost;
    } Movie1, Movie2;

    Movie1.name = "The Theory";
    Movie1.director = "Thura Lin Htut";
    Movie1.type = "Science";
    Movie1.mainactor = "Thura Lin htut";


    Movie2.name = "Beyond the world";
    Movie2.director = "Taylor Swift";
    Movie2.type = "Honnor";
    Movie2.mainactor = "Lisa";

    cout << "Movie 1" << "\n";

    cout<< Movie1.name  << ", " << Movie1.director << ", " << Movie1.type << "\n";
    cout<< Movie2.name  << ", " << Movie2.director << ", " << Movie2.type << "\n";






    return 0;

}
