#include <iostream>
#include <string>
using namespace std;

class MyClass{
    // Avoid making public variables instead use constructors 
    public:
        void setName(string name){
           this->name = name;
        }

        string getName(){
            return this->name;
        }

    private:
        string name;
};

int main(){
    
    MyClass obj;
    obj.setName("ekam");
    string name = obj.getName();
    cout << name << endl;

    return 0;

}
