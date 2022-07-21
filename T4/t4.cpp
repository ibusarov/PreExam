#include <iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {


	int total;
	cin >> total;
	int count100 = 0;
	int count200 = 0;
	int count300 = 0;

	double totalQty = 0.0;

	for (int i = 0; i < total; i++)
	{
		double foods = 0.0;

		cin >> foods;
		if (foods >= 100 && foods < 200)
		{
			count100++;
		}
		else if (foods < 300)
		{
			count200++;
		}
		else if(foods >= 300)
		{
			count300++;
		}

		totalQty += foods;

	}

	cout << "Group 1: " << count100 << " cats." << endl;
	cout << "Group 2: " << count200 << " cats." << endl;
	cout << "Group 3: " << count300 << " cats." << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Price for food per day: "<< (totalQty/1000) *12.45 <<" lv." << endl;

}
