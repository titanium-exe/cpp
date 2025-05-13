#include <iostream>
#include "indirOp.h"
using namespace std;

int main(){
    
    // this func can't be modified, 
    // if func it should be const in both .h and .c files
    const int x = 9;
    cout << x << endl;
    const  MyClass constObj(9);

    constObj.constFunction();
}
