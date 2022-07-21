#include <iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {

	cout.setf(ios::fixed);
	cout.precision(2);

	int priceVideo;
	cin >> priceVideo;
	int pricePrehod;
	cin >> pricePrehod;
	double costConsump;
	cin >> costConsump;
	double totalCosts;
	double income;
	cin >> income;

	totalCosts = priceVideo * 13.0 + pricePrehod * 13.0 + 1000*1.0;

	double profit;
	profit = (income - costConsump) *13.0;

	double returnR = ceil(totalCosts / profit);

	

	cout << totalCosts << endl;
	cout << returnR;




}
