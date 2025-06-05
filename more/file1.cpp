#include <iostream>
#include <string> 

using namespace std;

class Urlstring{

    public:
        Urlstring(string protocol, string resource): protocol(protocol), resource(resource) {}
        
        string getUrl(){
            string concatenated = protocol + "://" + resource;
            return concatenated;
        }
         
        
    
    private:
        string protocol;
        string resource; 
};


int main(){

    Urlstring url1("http", "example.com/index.html");
    string conc = url1.getUrl();
    
    cout<< conc << endl;

}