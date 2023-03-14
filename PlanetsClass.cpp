#include<iostream>
using namespace std;

class Planets {
private:
	double mass;
	int moons;
	int rings;
	char category;
	bool hasLife;
public:
	Planets();
	Planets(double ma, int mo, int ri, char ca, bool ha);
	void captureMoon();
	void shredMoon();
	void growLife();
	void getHitbyAstroid();
	void printInfo();
};

int main() {
	Planets Earth(5.9722, 1, 0, 'r', true);
	Planets Mars(6.39, 2, 0, 'r', false);
	Planets Jupiter(1.89813, 92, 4, 'g', false);
	Planets Saturn(5.683, 83, 7, 'g', false);
	Earth.captureMoon();
	Earth.shredMoon();
	Earth.growLife();
	Earth.getHitbyAstroid();
	Earth.printInfo();

	Mars.captureMoon();
	Mars.shredMoon();
	Mars.growLife();
	Mars.getHitbyAstroid();
	Mars.printInfo();

	Jupiter.captureMoon();
	Jupiter.shredMoon();
	Jupiter.growLife();
	Jupiter.getHitbyAstroid();
	Jupiter.printInfo();

	Saturn.captureMoon();
	Saturn.shredMoon();
	Saturn.growLife();
	Saturn.getHitbyAstroid();
	Saturn.printInfo();
}

Planets::Planets() {
	mass = 0;
	moons = 0;
	rings = 0;
	category = 'g', 'i', 'r';
	hasLife = false;

}

Planets::Planets(double ma, int mo, int ri, char ca, bool ha) {
	mass = ma;
	moons = mo;
	rings = ri;
	category = ca;
	hasLife = true;
}

void Planets::captureMoon() {
	moons += 1;
	cout << "This planet has " << moons << " moons!" << endl;
}

void Planets::shredMoon() {
	rings += 1;
	cout << "This planet has "<<rings<< " rings!" << endl;
}

void Planets::growLife() {
	hasLife = true;
	cout << "I am currently growing life!" << endl;
}

void Planets::getHitbyAstroid() {
	hasLife = false;
	cout << "I am currently dead by astroid." << endl;
}

void Planets::printInfo() {
	if (category == 'g')
		cout << "I am a gas planet!" << endl;
	if (category == 'i')
		cout << "I am an ice planet!" << endl;
	if (category == 'r')
		cout << "I am a rocky planet!" << endl;
}
