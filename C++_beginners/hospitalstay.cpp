/*
#include <iostream>
#include <iostream>
using namespace std;

double calculateCharges(int, double, double, double);
double calculateCharges(double, double);

int main()
{
	int days;
	double dailyRate, medCharges, labCharges, totalDue;
	bool inpatient = false;
	char answer;

	cout << "Is this an impatient stay?" << endl;
	cin >> answer;
	while (answer != 'y' && answer != 'n')
	{
		cout << "Please enter y/n" << endl;
		cin >> answer;
	}
	if (answer == 'y')
		inpatient = true;
	else
		inpatient = false;

	cout << "Enter the total medication charges: " << endl;
	cin >> medCharges;
	cout << "Enter the total lab charges: " << endl;
	cin >> labCharges;
	
	if (inpatient == true)
	{
		cout << "please enter days spent in the hospital: " << endl;
		cin >> days;
		cout << "please enter daily rate: " << endl;
		cin >> dailyRate;

		totalDue = calculateCharges(days, dailyRate,
			medCharges, labCharges);
	}
	else
	{
		totalDue = calculateCharges(medCharges, labCharges);
	}

	cout << "The total cost is: $" << totalDue << endl;
	return 0;
}

double calculateCharges(int d, double r, double m, double l)
{
	return d * r + m + l;
}

double calculateCharges(double m, double l)
{
	return m + l;
}

*/
