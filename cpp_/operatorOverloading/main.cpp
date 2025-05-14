#include <iostream>
#include "Op.h"

using namespace std;

int main(){
    Op op1(10);
    Op op2(34);
    Op op3;
    op3 = op1 + op2;
    cout << op3.num << endl;
    return 0;
}
