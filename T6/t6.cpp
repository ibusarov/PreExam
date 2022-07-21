#include <iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {

	int n;
	cin >> n;

	cout.setf(ios::fixed);
	cout.precision(2);

	for (int i = 1; i <= n; i++)
	{
		double expected = 0.0;
		cin >> expected;

		int days;
		cin >> days;

		double totalQty = 0.0;
		

		for (int i = 1; i <= days; i++)
		{
			double dailyQty;
			cin >> dailyQty;
			totalQty += dailyQty;
		}

		if ((totalQty/days) >= expected)
		{
			cout << "Good job! Average gold per day: " << totalQty/days << "." << endl;

		}
		else
		{
			cout <<"You need "<<expected - (totalQty/days)<<" gold."<< endl;
		}

	}


}
