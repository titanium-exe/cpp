#include <iostream>
using namespace std;




// Generic Template
template <class T>

class Ekamleen{

    public:
        Ekamleen(T x){
            cout << "constructor: " << x << endl; 
        }
};


// Special Template 
template<> 
class Ekamleen<char>{
    
    public:
        Ekamleen(char x){
            cout << x << " is a char" << endl; 
        }

};


int main(){
    Ekamleen<int>  ekm1(7);
    Ekamleen<float>  ekm2(7.6);
    Ekamleen<double>  ekm3(756.009);
    Ekamleen<char>  ekm4('r');


}
















