#include <iostream>
#include <fstream>
#include <cstdlib>  // for getenv

using namespace std;

int main() {
    string home = getenv("HOME");
    string path = home + "/Desktop/random.txt";

    ifstream ekmsfile(path);
    
    ekmsfile.close();

    return 0;
}


