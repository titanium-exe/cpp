#include <iostream>
using namespace std;

template <class T>

class Ekam{

    T first, second;

    public:
        Ekam(T a, T b){
        
            this->first = a;
            this->second = b;
    
        }


        T bigger();

};
 
template <class T>
T Ekam<T>::bigger(){
 
    return (this->first>this->second?first:second);

}


int main(){
    
    Ekam<int> ekm(100,20);
    
    cout << ekm.bigger() << endl;

}       
