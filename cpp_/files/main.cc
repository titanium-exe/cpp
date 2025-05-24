#include <iostream>
#include <fstream>
#include <cstdlib>  // for getenv

using namespace std;

int main() {
    string home = getenv("HOME");
    string path = home + "/Desktop/random.txt";

    ofstream ekmsfile(path);
    ekmsfile << "this is a random text in random file" << endl;
    ekmsfile.close();

    return 0;
}

