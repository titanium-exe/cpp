#include <iostream>
using namespace std;

int main(){
    
    int sally[2][3] = {{1,2,4}, {3,8,9}};
    
        for(int i =0; i < 2; i++){
            for(int j=0; j < 3; j++){
                cout << sally[i][j] <<" ";
            }
            cout << endl;  
        }
}
