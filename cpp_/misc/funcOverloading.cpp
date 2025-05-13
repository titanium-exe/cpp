#include <iostream>
using namespace std;

void printNumber(int x){
    cout << "i am printing an int: " << x <<  endl;
}


void printNumber(float x){

    cout << "I am printing a float: " << x << endl;
}



int main(){

    int a = 9;
    float b = 34.6778;

    printNumber(a);
    printNumber(b);

}
