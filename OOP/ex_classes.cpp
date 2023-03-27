#include <iostream>

using namespace std;


class Movie {
    public:
    string name;
    string type;
    string directorname;
    string actorname;
    int finalcost;

    void display(){
        cout << "Movie Name : " << name << "\n";
        cout << "Movie Type : " << type << "\n";
        cout << "Director Name : " << type << "\n";
        cout << "Actor Name : " << actorname << "\n";
        cout << "Movie Final Cost : " << finalcost << "\n";
        cout << "____________________________\n";

    }
};




int main(){


    Movie movie;
    movie.name = "Doctor Strange";
    movie.type = "Science Fiction";
    movie.directorname = "Marvel";
    movie.actorname = "Doctor Strange";
    movie.finalcost = 10000;


    Movie movie1;
    movie1.name = "Spider Man No Way Home";
    movie1.type = "Science Fiction";
    movie1.directorname = "Marvel";
    movie1.actorname = "Tom Holland";
    movie1.finalcost = 2500;


    movie1.display();
    movie.display();

    return 0;
}
