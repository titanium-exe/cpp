#include <iostream>
#include "indirOp.h"

using namespace std;


void MyClass::printSomething(){

    cout << "Something" << endl;
}

MyClass::MyClass(int x){}

void MyClass::constFunction() const {

    cout << "✅ Const objects can only call const member functions. But constant member functions can be called by both constant and non-constant objects." << endl;
}
