#include <iostream>

using namespace std;

void printArray(int theArray[], int size);

int main(){
    
    int arr[5] = {4,5,6,7,1};

    printArray(arr, 5);


}


void printArray(int theArray[], int size){

    for(int x =0; x < size; x++){
        cout << theArray[x] << endl;
    }

}
