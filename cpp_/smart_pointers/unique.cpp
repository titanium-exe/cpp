#include <iostream>
#include <memory>
using namespace std;

void f1(){

    unique_ptr<int> ptr1(new int(10));
    unique_ptr<int> ptr2;
    
    cout << *ptr1 << endl;
}

int main(){

    f1();
    cout << endl;
    return 0;   
}
