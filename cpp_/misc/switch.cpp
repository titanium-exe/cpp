#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int age = 23;
    
    switch(age) {
        case 16:
            cout << "Age is 16" << endl;
            break;
        case 18: 
            cout << "Age is 18" << endl;
            break;
        case 23:
            cout << "Age is 23" << endl;
            break;
        default:
            cout << "You are a human" << endl;
    }
}
