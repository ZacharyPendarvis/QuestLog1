#include <iostream>
using namespace std;

int main() {
	int feet;
	int remainingInches;
	double totalInches;
	double weight;
	double bmi;

	cout << "Enter the feet portion of your height: " << endl;
	cin >> feet;
	cout << endl << "Enter the remaining inches: " << endl;
	cin >> remainingInches;
	cout << endl << "Enter your weight in lbs: " << endl;
	cin >> weight;
	totalInches = feet * 12 + remainingInches;
	bmi = (weight * 703) / (totalInches * totalInches);
	cout << endl << "Your BMI is: " << bmi << endl;

	return 0;
}