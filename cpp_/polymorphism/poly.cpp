#include <iostream>
using namespace std;


class Enemy{

	protected:
		int attackPower;
	public:
		void setAttackPower(int a) {
			this->attackPower = a;
		}

};

class Ninja: public Enemy {

	public:
		void attack() {
			cout << "I am a ninja chop! -" << attackPower << endl; 
		}
};

class Monster: public Enemy {

	public:
		void attack(){

			cout << "I am a monster! -" << attackPower << endl; 
		}
};

// Enemy object has no function attack but Ninja and Monster have access to attackPower
// Enemy Object can't attack because its parent but its children Ninja and Monster 
// can use their parent's properties/functions, e.g. setAttackPower and attackPower


int main(){

	Ninja n;
	Monster m;

	Enemy* enemy1 = &n;
	Enemy* enemy2 = &m;

	enemy1->setAttackPower(20);
	enemy2->setAttackPower(30);

	n.attack();
	m.attack();

}
