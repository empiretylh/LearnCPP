#include <iostream>
using namespace std;

namespace mynamespace{
    int foo() {return 42;}
    int bar() {return 84;}
}


int main() {
  cout << "Hello World!" <<endl;
  int file_size = 10000;

  string apple = "apple";
  string ball = "balll";

  int integer = 15000.8988;

  double Double = integer;


  cout << "Double But Integer : " << integer << endl;

  std::cout << file_size * 0.1 << endl;
  std::cout << mynamespace::foo() <<std::endl;
  std::cout << mynamespace:: bar () <<endl;


  return 0;
}
