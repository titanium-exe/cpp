#include <iostream>
using namespace std;

class MyClass{
    // access specifier : Public and private to use outside 
    // and only inside (for private) the class
    
    public:
        void coolSaying(){
            cout << "this is cool" << endl;
        }
};

int main(){
    
    MyClass myclassObj;
    myclassObj.coolSaying();
    return 0;
}
