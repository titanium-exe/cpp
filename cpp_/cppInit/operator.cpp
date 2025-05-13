#include <iostream>
using namespace std;

int main(){

    int x = 6;
    // x++ => Line will executed first and then the update of +1 will happen
    cout << x++ << endl;
    
    // ++x => means increment will happen first and then the line will be printed
    cout<< ++x << endl;

    int y = 24;
    int j;
    j = ++y; 
    cout << j << endl;


    int k = 90;
    int p;
    p = k++;
    cout << p << endl;
}
