#include <iostream>
using namespace std;
#include <memory>

// a unique poitner can never be copied, it can only be moved. It will have only 1 raw pointer
// variable pointing towards it.


class Dog {
public:
    Dog()  { std::cout << "Dog created\n"; }
    ~Dog() { std::cout << "Dog destroyed\n"; }
    void bark() { std::cout << "Woof!\n"; }
};


int main() {

	unique_ptr<Dog> p1 = make_unique<Dog>();
	p1->bark();

	// this is not allowed  unique_ptr<Dog> p2 = p1; 
	// Instead we move ownership 
	unique_ptr<Dog> p2 = std::move(p1);

	p2->bark();	
}
