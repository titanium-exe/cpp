#include <iostream>

using namespace std;

int main(){

    int fish = 5;
    cout << &fish << endl;

    int* ptr = &fish;

    cout<< ptr << endl;

    cout <<  *ptr << endl;

}
