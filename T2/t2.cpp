#include <iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {

	string name;
	cin >> name;

	double budget;
	cin >> budget;

	int bottles;
	cin >> bottles;

	int chips;
	cin >> chips;
	double priceChips = (1.2 * bottles * 0.45);
	

	double totalCosts = bottles * 1.2 + ceil(chips * priceChips);

	
	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= totalCosts)
	{
		cout << name << " bought a snack and has " << budget - totalCosts << " leva left." << endl;

	}
	else
	{
		cout << name << " needs " << totalCosts - budget << " more leva!" << endl;
	}




}
