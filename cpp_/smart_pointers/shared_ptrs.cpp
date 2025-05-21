#include <iostream>
using namespace std;

#include <memory>

class Cat {
public:
    Cat()  { std::cout << "Cat created\n"; }
    ~Cat() { std::cout << "Cat destroyed\n"; }
    void meow() { std::cout << "Meow!\n"; }
};


int main() {


	shared_ptr<Cat> cat1 = std::make_shared<Cat>();
	shared_ptr<Cat> cat2 = cat1; // this is valid for shared_ptrs 
	
	cat1->meow();
	cat2->meow();

	cout<< "Address for cat1: " << cat1.get() << endl;
	cout << "Address for cat2: " << cat2.get() << endl;
        
	cout << "use count = " <<  cat1.use_count() << endl;
	cout << "use count = " <<  cat2.use_count() << endl;


	// now removing cat1
        cat1.reset();	
	std::cout << "Address from cat1 (now reset): " << cat1.get() << "\n";
	std::cout << "Address from cat2 : " << cat2.get() << "\n";

	// this should crash; 	cat1->meow();
	
	if (cat1) {
	    	cat1->meow();
	}else {
    		std::cout << "cat1 is null. Cannot call meow.\n";
	}

	cout << "use_count = " << cat2.use_count() << endl;

}

