#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;


int main(){
    Birthday bd(21,3,2002);
    People people("ekam", bd);
    people.printInfo();
}
