#include <iostream>
#include<math.h>
#include<string>

using namespace std;

int main() {

	string team;
	cin >> team;

	string suv;
	cin >> suv;

	int count;
	cin >> count;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (team == "Argentina")
	{
		if (suv == "flags")
		{
			cout << "Pepi bought "<<count <<" "<<suv<<" of "<<team<<" for "<<count * 3.25<<" lv."<< endl;

		}
		else if(suv == "caps")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 7.2 << " lv." << endl;
		}
		else if (suv == "posters")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 5.1 << " lv." << endl;
		}
		else if(suv == "stickers")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 1.25 << " lv." << endl;
		}
		else
		{
			cout << "Invalid stock!" << endl;
		}

	}
	else if (team == "Brazil")
	{
		if (suv == "flags")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 4.2 << " lv." << endl;

		}
		else if (suv == "caps")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 8.5 << " lv." << endl;
		}
		else if (suv == "posters")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 5.35 << " lv." << endl;
		}
		else if (suv == "stickers")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 1.2 << " lv." << endl;
		}
		else
		{
			cout << "Invalid stock!" << endl;
		}

	}
	else if (team == "Croatia")
	{

		if (suv == "flags")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 2.75 << " lv." << endl;

		}
		else if (suv == "caps")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 6.9 << " lv." << endl;
		}
		else if (suv == "posters")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 4.95 << " lv." << endl;
		}
		else if (suv == "stickers")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 1.1 << " lv." << endl;
		}
		else
		{
			cout << "Invalid stock!" << endl;
		}

	}
	else if (team == "Denmark")
	{
		if (suv == "flags")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 3.1 << " lv." << endl;

		}
		else if (suv == "caps")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 6.5 << " lv." << endl;
		}
		else if (suv == "posters")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 4.8 << " lv." << endl;
		}
		else if (suv == "stickers")
		{
			cout << "Pepi bought " << count << " " << suv << " of " << team << " for " << count * 0.9 << " lv." << endl;
		}
		else
		{
			cout << "Invalid stock!" << endl;
		}

	}
	else
	{
		cout << "Invalid country!" << endl;
	}


}
