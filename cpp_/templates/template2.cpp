#include <iostream>

using namespace std;


template <class  First, class Second>

Second smaller(First a, Second b){

    return (a<b?a:b);

}

// we will get 55 bc double got converted into int
// This all depends upon the return type if return type 
// become the double argument then its going to return 
// double, if it becomes int parameter then we will get 
// int. 

int main(){

    int x = 89;
    double y = 55.7;
    cout << smaller(x,y) << endl;
    cout << smaller(y,x) << endl;

}
