#include <iostream>
using namespace std;

int main(){

    try{

        int mom_age = 43;
        int daughter_age = 23;
        
        if(mom_age < daughter_age){

            throw 99;
        }

    }catch (int e) {
    
        cout << "Daughter can't be older than Mom Error: " << e << endl;

    }

}
