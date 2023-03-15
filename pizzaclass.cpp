#include<iostream>
using namespace std;

class Pizza {
private:
	int toppings;
	double price;
	bool isBaked;

public:
	Pizza();
	Pizza(int top, double pri, bool ha);
	int addTopping();
	double pricing();
	bool baking();
	void printInfo();
};

int main() {
	Pizza PhoneGuy();
	Pizza Afton();
	Pizza Henry();

	PhoneGuy.addTopping();
	PhoneGuy.pricing();
	PhoneGuy.baking();
	PhoneGuy.printInfo();

	Afton.addTopping();
	Afton.pricing();
	Afton.baking();
	Afton.printInfo();

	Henry.addTopping();
	Henry.pricing();
	Henry.baking();
	Henry.printInfo();
}

Pizza::Pizza() {
	toppings = 0;
	price = 0;
	isBaked = false;
}

Pizza::Pizza(int top, double pri, bool ha) {
	toppings = top;
	price = pri;
	isBaked = true;
}

int addTopping() {
	toppings += 1;
	cout << "You have " << toppings << " toppings!" << endl;
}

double pricing() {
	price = pricing * 2 + 10;
	cout << "This will cost " << price << "dollars!" << endl;
	return price
}
