#include <iostream>
#include "indirOp.h"

using namespace std;

int main(){

    MyClass obj(6); 
    MyClass* classObjPtr = &obj;

    classObjPtr->printSomething();
}

void MyClass::printSomething(){

    cout << "Something" << endl;
}

MyClass::MyClass(int x){}
