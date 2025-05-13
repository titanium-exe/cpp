#include <iostream>
#include <string>

using namespace std;

class MyClass{
    public:
        // constructors dont have a return type 
        // constrctor name is always the class name
        MyClass(string name){
            // cout << "this will get called automatically" << endl;
            setName(name);
        }       
        
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
    
    MyClass myclass("ekamleen"); 
    string name = myclass.getName();
    cout << name << endl;
    MyClass myclass1("shaina");
    string name2 = myclass1.getName() ;
    cout << name2 << endl;
    return 0;
}











