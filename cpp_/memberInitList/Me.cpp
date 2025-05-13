#include <iostream>
#include "Me.h"

using namespace std;

// when You have const variable this is how you make constructor 
Me::Me(int a, int b)
    :regVar(a),
    constVar(b)
{
}

void Me::printMe(){

    cout<< "regular var is: " << regVar << "\n" << "constVar is: " << constVar << endl;
        
}
