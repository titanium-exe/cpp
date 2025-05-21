#include <iostream>
#include <memory>
using namespace std;

class Tyre {

	public:
		void doRepair(){
			cout << "Doing Repair" << endl;
		};
};


class Car {

	private:
		shared_ptr<Tyre> wheel1;
	public:
		Car(){
			wheel1 = std::make_shared<Tyre>();
		}

	        shared_ptr<Tyre> getWheel1(){
			return wheel1;
		}
};

int main(){

	Car car1;
	shared_ptr<Tyre> wheel1 = car1.getWheel1();

	wheel1->doRepair();


}
