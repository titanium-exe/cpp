#include <iostream>

using namespace std;

// unique pointer 

void f1(){
    
    // templates 
    // p has a raw pointer that p can control 
    // Now I don't have to write delete(p)

    unique_ptr<int> p(new int(10));
    if(p != nullptr){
        return ;
    }

    // when func end p unique pointer will also be destroyed inside the destructor of class
    // template unique_ptr
    
    unique_ptr<int> k;
    k.reset(new int(10));
    
    // if you don't pass anything in reset() then ? 
    // reset releases the memory of ptr inside of k and make ptr inside k to point at nullptr
    //
    // There is a raw pointer inside of object of unique_ptr

}


int main(){


}
