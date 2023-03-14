#include<iostream>
using namespace std;

class Goomba {
private:
	int xpos;
	int ypos;
	bool isAlive;
	char color;
public:
	Goomba(); //Default constructor
	Goomba(int x, int y, char c); //Parameterized contructor
	void walk();
	void printInfo();
	void kill();
	void setPosition(int x ,int y);
	bool CheckIsDead();
};

int main() {
	Goomba Lary(300, 400, 'l'); // uses parameterized constructor
	Goomba Bob(); // uses regular constructor, gets default values
	Lary.printInfo();
	Lary.walk();
	Lary.printInfo();
	Lary.kill();
	Lary.CheckIsDead();

}

Goomba::Goomba() { //default
	xpos = 0;
	ypos = 0;
	color = 'b';
	isAlive = false;
}
Goomba::Goomba(int x, int y, char c) { //parameterized
	xpos = x;
	ypos = y;
	color = c;
	isAlive = true;
}

void Goomba::walk() { xpos += 50; }

void Goomba::printInfo() {
	cout << "Hi, I am a Goomba and my position is:" << xpos << "," << ypos << endl;
	if (color == 'b')
		cout << "I am brown!" << endl;
	if (color == 'l')
		cout << "I am blue!" << endl;

	if (isAlive == true)
		cout << "I am currently alive." << endl;
	else
		cout << "I am currently dead." << endl;
}

void Goomba::kill() {
	cout << "You killed me! I'm dead!" << endl;
	isAlive = false;
}

void Goomba::setPosition(int x, int y) {
	isAlive = true;
}

bool Goomba::CheckIsDead() {
	if (isAlive == false)
		return 0;
	else
		return 1;
}
