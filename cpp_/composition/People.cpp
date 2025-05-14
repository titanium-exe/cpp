#include <iostream>
#include "People.h"
#include "Birthday.h"
using namespace std;

// when using class obj inside of another class objects
People::People(string name, Birthday bd)
: name(name),
  bd(bd)
{
}

void People::printInfo(){

    cout << name << "  ";
    bd.printBD();
}


