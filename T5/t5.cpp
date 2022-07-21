#include <iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {

	string qty;
	getline(cin, qty);

	int realQty = stoi(qty) * 1000;

	string command;
	getline(cin, command);

	int totalSum = 0;

	while (command != "Adopted")
	{
		int dailyQty = stoi(command);
		totalSum += dailyQty;
		getline(cin, command);
	}

	

	if (totalSum <= realQty)
	{
		cout << "Food is enough! Leftovers: "<<realQty - totalSum<<" grams." << endl;
	}
	else
	{
		cout << "Food is not enough. You need " << totalSum - realQty << " grams more." << endl;
	}


}
