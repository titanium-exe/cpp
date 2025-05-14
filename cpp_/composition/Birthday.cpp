#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int m, int d, int y){
    this->month = m;
    this->day = d;
    this->year = y;
}


void Birthday::printBD(){

    cout << "Date is " << month << "-" << day << "-" << year << endl; 
}
