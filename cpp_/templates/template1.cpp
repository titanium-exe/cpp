#include <iostream>
using namespace std;

template <class bucky>

bucky addCrap(bucky a, bucky b){

    return a+b;
}


int main(){

  int x = 5; 
  int y = 9;
  int z = addCrap(x,y);
  cout << z << endl;


  double p = 6.5;
  double q = 9.5;
  double r = addCrap(p,q);
  cout << r << endl;

}
