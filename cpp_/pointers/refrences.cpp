#include <iostream>
using namespace std;


void increment(int& ref){

    ref +=1 ;
}


int main(){

    int x = 5;
    increment(x);
    cout << "after increment: " << x << endl;
}
