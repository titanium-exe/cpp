#include <iostream>
#include "Op.h"
using namespace std;

Op::Op(){}

Op::Op(int a){

    this->num = a;
}

Op Op::operator+(Op op){

    Op brandnew;
    brandnew.num = this->num + op.num;
    return (brandnew);
}
