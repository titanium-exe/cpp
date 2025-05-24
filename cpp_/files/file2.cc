#include <iostream>
#include <fstream>
#include <cstdlib>  // for getenv
#include <string>

using namespace std;

int main() {
    string home = getenv("HOME");
    string path = home + "/Desktop/random.txt";

    ofstream ekmsfile(path);
    cout << "Enter the Name: \nEnter the Id:  \n" << endl;
    cout << "Press ctrl+z to quit\n" << endl;
    
    string name;
    int id;
    
    while(cin>> name >> id){
        ekmsfile << name << "\n" << id << endl;
    }


    ekmsfile.close();

    return 0;
}

